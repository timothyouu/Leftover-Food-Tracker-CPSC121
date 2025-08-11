// Please fill in below.
// Timothy Ou
// CPSC 121L-13
// 04/02/25
// tlou@csu.fullerton.edu
// timothyouu

#include "leftover_report.h"

#include <iostream>
#include <map>
#include <string>

std::vector<std::string> LeftoverReport::MostCommonlLeftover() const {
  std::map<std::string, int> leftover_frequency;
  std::vector<std::string> most;
  int most_value{0};
  for (LeftoverRecord record : leftover_records_) {
    leftover_frequency[record.GetFoodName()]++;
    if (leftover_frequency[record.GetFoodName()] > most_value) {
      most_value = leftover_frequency[record.GetFoodName()];
    }
  }
  for (std::pair<std::string, int> leftover : leftover_frequency) {
    if (leftover.second == most_value) {
      most.push_back(leftover.first);
    }
  }
  return most;
}
std::vector<std::string> LeftoverReport::MostCostlyLeftoverProducingMeals()
    const {
  std::map<std::string, int> meal_frequency;
  std::vector<std::string> most;
  int most_value{0};
  for (LeftoverRecord record : leftover_records_) {
    meal_frequency[record.GetMeal()]++;
    if (meal_frequency[record.GetMeal()] > most_value) {
      most_value = meal_frequency[record.GetMeal()];
    }
  }
  for (std::pair<std::string, int> meal : meal_frequency) {
    if (meal.second == most_value) {
      most.push_back(meal.first);
    }
  }
  return most;
}
double LeftoverReport::TotalCostOfLeftover() const {
  double cost = 0;
  for (LeftoverRecord record : leftover_records_) {
    cost += record.GetCost();
  }
  return cost;
}
std::vector<std::string> LeftoverReport::MostCommonLeftoverReasons() const {
  std::map<std::string, int> reason_frequency;
  std::vector<std::string> most;
  int most_value{0};
  for (LeftoverRecord record : leftover_records_) {
    reason_frequency[record.GetLeftoverReason()]++;
    if (reason_frequency[record.GetLeftoverReason()] > most_value) {
      most_value = reason_frequency[record.GetLeftoverReason()];
    }
  }
  for (std::pair<std::string, int> reason : reason_frequency) {
    if (reason.second == most_value) {
      most.push_back(reason.first);
    }
  }
  return most;
}
std::vector<std::string> LeftoverReport::MostCommonDisposalMechanisms() const {
  std::map<std::string, int> disposal_frequency;
  std::vector<std::string> most;
  int most_value{0};
  for (LeftoverRecord record : leftover_records_) {
    disposal_frequency[record.GetDisposalMechanism()]++;
    if (disposal_frequency[record.GetDisposalMechanism()] > most_value) {
      most_value = disposal_frequency[record.GetDisposalMechanism()];
    }
  }
  for (std::pair<std::string, int> disposal : disposal_frequency) {
    if (disposal.second == most_value) {
      most.push_back(disposal.first);
    }
  }
  return most;
}
std::vector<std::string> LeftoverReport::SuggestLeftoverReductionStrategies()
    const {
  std::vector<std::string> reasons = MostCommonLeftoverReasons();
  std::vector<std::string> strats;
  bool duplicate{false};
  bool expired{false};
  if (reasons.size() == 0) {
    return strats;
  }
  for (std::string reason : reasons) {
    if (reason == "Expired") {
      expired = true;
      strats.push_back("Donate before expiration");
    }
    if (reason == "Tastes bad") {
      if (duplicate == false) {
        duplicate = true;
        strats.push_back("Buy less food");
      }
    }
    if (reason == "Too much left overs") {
      if (duplicate == false) {
        duplicate = true;
        strats.push_back("Buy less food");
      }
      strats.push_back("Cook small servings");
    }
  }
  if (expired == false) {
    strats.push_back("Recycle left overs");
  }
  return strats;
}