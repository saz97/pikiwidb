/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#pragma once
#include "base_cmd.h"

namespace pikiwidb {
class LPushCmd : public BaseCmd {
 public:
  LPushCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class RPushCmd : public BaseCmd {
 public:
  RPushCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class BLPopCmd : public BaseCmd {
 public:
  BLPopCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
  void BlockThisClientToWaitLRPush(std::vector<std::string>& keys, int64_t expire_time, PClient* client);

  int64_t expire_time_{0};
};

class RPopCmd : public BaseCmd {
 public:
  RPopCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};
class LRangeCmd : public BaseCmd {
 public:
  LRangeCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LRemCmd : public BaseCmd {
 public:
  LRemCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LTrimCmd : public BaseCmd {
 public:
  LTrimCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LSetCmd : public BaseCmd {
 public:
  LSetCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LInsertCmd : public BaseCmd {
 public:
  LInsertCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LPushxCmd : public BaseCmd {
 public:
  LPushxCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class RPushxCmd : public BaseCmd {
 public:
  RPushxCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class RPoplpushCmd : public BaseCmd {
 public:
  RPoplpushCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;

 private:
  std::string source_;
  std::string receiver_;
  std::string value_poped_from_source_;
};

class LPopCmd : public BaseCmd {
 public:
  LPopCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LIndexCmd : public BaseCmd {
 public:
  LIndexCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class LLenCmd : public BaseCmd {
 public:
  LLenCmd(const std::string& name, int16_t arity);

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};
}  // namespace pikiwidb
