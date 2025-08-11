// Please fill in below.
// Timothy Ou
// CPSC 121L-13
// 04/02/25
// tlou@csu.fullerton.edu
// timothyouu

#include "leftover_tracker.h"

bool LeftoverTracker::AddRecord(const LeftoverRecord &record) {
  bool duplicate{false};
  for (LeftoverRecord rec : leftover_records_) {
    if (record.GetDate() == rec.GetDate() &&
        record.GetFoodName() == rec.GetFoodName() &&
        record.GetCost() == rec.GetCost() &&
        record.GetDisposalMechanism() == rec.GetDisposalMechanism() &&
        record.GetLeftoverReason() == rec.GetLeftoverReason() &&
        record.GetMeal() == rec.GetMeal()) {
      duplicate = true;
      break;
    }
  }
  if (duplicate) {
    return false;
  } else {
    leftover_records_.push_back(record);
    return true;
  }
}

bool LeftoverTracker::DeleteRecord(const LeftoverRecord &record) {
  for (int i = 0; i < leftover_records_.size(); i++) {
    if (record.GetFoodName() == leftover_records_.at(i).GetFoodName()) {
      if (record.GetDate() == leftover_records_.at(i).GetDate()) {
        if (record.GetCost() == leftover_records_.at(i).GetCost()) {
          if (record.GetDisposalMechanism() ==
              leftover_records_.at(i).GetDisposalMechanism()) {
            if (record.GetLeftoverReason() ==
                leftover_records_.at(i).GetLeftoverReason()) {
              if (record.GetMeal() == leftover_records_.at(i).GetMeal()) {
                leftover_records_.erase(leftover_records_.begin() + i);
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
}
const std::vector<LeftoverRecord> &LeftoverTracker::GetRecords() const {
  return leftover_records_;
}
LeftoverReport LeftoverTracker::GetLeftoverReport() const {
  LeftoverReport new_report{leftover_records_};
  return new_report;
}