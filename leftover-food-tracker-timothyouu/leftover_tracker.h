#ifndef LEFTOVER_TRACKER_H_
#define LEFTOVER_TRACKER_H_
#include <iostream>
#include <vector>

#include "leftover_record.h"
#include "leftover_report.h"

// Please fill in below.
// Timothy Ou
// CPSC 121L-13
// 04/02/25
// tlou@csu.fullerton.edu
// timothyouu

class LeftoverTracker {
 public:
  bool AddRecord(const LeftoverRecord &record);
  bool DeleteRecord(const LeftoverRecord &record);
  const std::vector<LeftoverRecord> &GetRecords() const;
  LeftoverReport GetLeftoverReport() const;

 private:
  std::vector<LeftoverRecord> leftover_records_;
};

#endif
