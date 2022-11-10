// Copyright (c) Joshua Nichols and Tyler Veness

#include "CasADi.h"
#include "Sleipnir.h"
#include "Util.h"

int main() {
  constexpr bool diagnostics = false;

  constexpr auto T = 5_s;
  constexpr int kMinPower = 2;
  constexpr int kMaxPower = 4;

  return RunBenchmarksAndLog(diagnostics, T, kMinPower, kMaxPower,
                             &FlywheelCasADi, &FlywheelSleipnir);
}