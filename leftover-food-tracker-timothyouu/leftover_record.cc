// Please fill in below.
// Timothy Ou
// CPSC 121L-13
// 04/02/25
// tlou@csu.fullerton.edu
// timothyouu

#include "leftover_record.h"

void LeftoverRecord::SetDate(const std::string &date) { date_ = date; }
void LeftoverRecord::SetMeal(const std::string &meal) { meal_ = meal; }
void LeftoverRecord::SetFoodName(const std::string &food_name) {
  food_name_ = food_name;
}
void LeftoverRecord::SetQuantityInOz(double qty_in_oz) {
  qty_in_oz_ = qty_in_oz;
}
void LeftoverRecord::SetLeftoverReason(const std::string &leftover_reason) {
  leftover_reason_ = leftover_reason;
}
void LeftoverRecord::SetDisposalMechanism(
    const std::string &disposal_mechanism) {
  disposal_mechanism_ = disposal_mechanism;
}
void LeftoverRecord::SetCost(double cost) { cost_ = cost; }

std::string LeftoverRecord::GetDate() const { return date_; }
std::string LeftoverRecord::GetMeal() const { return meal_; }
std::string LeftoverRecord::GetFoodName() const { return food_name_; }
double LeftoverRecord::GetQuantityInOz() const { return qty_in_oz_; }
std::string LeftoverRecord::GetLeftoverReason() const {
  return leftover_reason_;
}
std::string LeftoverRecord::GetDisposalMechanism() const {
  return disposal_mechanism_;
}
double LeftoverRecord::GetCost() const { return cost_; }