// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_POLARDB20170801_H_
#define ALIBABACLOUD_POLARDB20170801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Polardb20170801 {
class CancelScheduleTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  CancelScheduleTasksRequest() {}

  explicit CancelScheduleTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelScheduleTasksRequest() = default;
};
class CancelScheduleTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelScheduleTasksResponseBody() {}

  explicit CancelScheduleTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelScheduleTasksResponseBody() = default;
};
class CancelScheduleTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelScheduleTasksResponseBody> body{};

  CancelScheduleTasksResponse() {}

  explicit CancelScheduleTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelScheduleTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelScheduleTasksResponseBody>(model1);
      }
    }
  }


  virtual ~CancelScheduleTasksResponse() = default;
};
class CheckAccountNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckAccountNameRequest() {}

  explicit CheckAccountNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckAccountNameRequest() = default;
};
class CheckAccountNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckAccountNameResponseBody() {}

  explicit CheckAccountNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckAccountNameResponseBody() = default;
};
class CheckAccountNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckAccountNameResponseBody> body{};

  CheckAccountNameResponse() {}

  explicit CheckAccountNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckAccountNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAccountNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAccountNameResponse() = default;
};
class CheckDBNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckDBNameRequest() {}

  explicit CheckDBNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckDBNameRequest() = default;
};
class CheckDBNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckDBNameResponseBody() {}

  explicit CheckDBNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDBNameResponseBody() = default;
};
class CheckDBNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckDBNameResponseBody> body{};

  CheckDBNameResponse() {}

  explicit CheckDBNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDBNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDBNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDBNameResponse() = default;
};
class CloseDBClusterMigrationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> continueEnableBinlog{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CloseDBClusterMigrationRequest() {}

  explicit CloseDBClusterMigrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (continueEnableBinlog) {
      res["ContinueEnableBinlog"] = boost::any(*continueEnableBinlog);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContinueEnableBinlog") != m.end() && !m["ContinueEnableBinlog"].empty()) {
      continueEnableBinlog = make_shared<bool>(boost::any_cast<bool>(m["ContinueEnableBinlog"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CloseDBClusterMigrationRequest() = default;
};
class CloseDBClusterMigrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseDBClusterMigrationResponseBody() {}

  explicit CloseDBClusterMigrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloseDBClusterMigrationResponseBody() = default;
};
class CloseDBClusterMigrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseDBClusterMigrationResponseBody> body{};

  CloseDBClusterMigrationResponse() {}

  explicit CloseDBClusterMigrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloseDBClusterMigrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseDBClusterMigrationResponseBody>(model1);
      }
    }
  }


  virtual ~CloseDBClusterMigrationResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> accountType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateBackupRequest() {}

  explicit CreateBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateBackupRequest() = default;
};
class CreateBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupJobId{};
  shared_ptr<string> requestId{};

  CreateBackupResponseBody() {}

  explicit CreateBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJobId) {
      res["BackupJobId"] = boost::any(*backupJobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJobId") != m.end() && !m["BackupJobId"].empty()) {
      backupJobId = make_shared<string>(boost::any_cast<string>(m["BackupJobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBackupResponseBody() = default;
};
class CreateBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBackupResponseBody> body{};

  CreateBackupResponse() {}

  explicit CreateBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupResponse() = default;
};
class CreateDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> backupRetentionPolicyOnClusterDeletion{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> cloneDataPoint{};
  shared_ptr<string> clusterNetworkType{};
  shared_ptr<string> creationCategory{};
  shared_ptr<string> creationOption{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBMinorVersion{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> defaultTimeZone{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> lowerCaseTableNames{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> sourceResourceId{};
  shared_ptr<bool> TDEStatus{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateDBClusterRequest() {}

  explicit CreateDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (backupRetentionPolicyOnClusterDeletion) {
      res["BackupRetentionPolicyOnClusterDeletion"] = boost::any(*backupRetentionPolicyOnClusterDeletion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cloneDataPoint) {
      res["CloneDataPoint"] = boost::any(*cloneDataPoint);
    }
    if (clusterNetworkType) {
      res["ClusterNetworkType"] = boost::any(*clusterNetworkType);
    }
    if (creationCategory) {
      res["CreationCategory"] = boost::any(*creationCategory);
    }
    if (creationOption) {
      res["CreationOption"] = boost::any(*creationOption);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBMinorVersion) {
      res["DBMinorVersion"] = boost::any(*DBMinorVersion);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (defaultTimeZone) {
      res["DefaultTimeZone"] = boost::any(*defaultTimeZone);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (lowerCaseTableNames) {
      res["LowerCaseTableNames"] = boost::any(*lowerCaseTableNames);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (sourceResourceId) {
      res["SourceResourceId"] = boost::any(*sourceResourceId);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BackupRetentionPolicyOnClusterDeletion") != m.end() && !m["BackupRetentionPolicyOnClusterDeletion"].empty()) {
      backupRetentionPolicyOnClusterDeletion = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPolicyOnClusterDeletion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CloneDataPoint") != m.end() && !m["CloneDataPoint"].empty()) {
      cloneDataPoint = make_shared<string>(boost::any_cast<string>(m["CloneDataPoint"]));
    }
    if (m.find("ClusterNetworkType") != m.end() && !m["ClusterNetworkType"].empty()) {
      clusterNetworkType = make_shared<string>(boost::any_cast<string>(m["ClusterNetworkType"]));
    }
    if (m.find("CreationCategory") != m.end() && !m["CreationCategory"].empty()) {
      creationCategory = make_shared<string>(boost::any_cast<string>(m["CreationCategory"]));
    }
    if (m.find("CreationOption") != m.end() && !m["CreationOption"].empty()) {
      creationOption = make_shared<string>(boost::any_cast<string>(m["CreationOption"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBMinorVersion") != m.end() && !m["DBMinorVersion"].empty()) {
      DBMinorVersion = make_shared<string>(boost::any_cast<string>(m["DBMinorVersion"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("DefaultTimeZone") != m.end() && !m["DefaultTimeZone"].empty()) {
      defaultTimeZone = make_shared<string>(boost::any_cast<string>(m["DefaultTimeZone"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("LowerCaseTableNames") != m.end() && !m["LowerCaseTableNames"].empty()) {
      lowerCaseTableNames = make_shared<string>(boost::any_cast<string>(m["LowerCaseTableNames"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SourceResourceId") != m.end() && !m["SourceResourceId"].empty()) {
      sourceResourceId = make_shared<string>(boost::any_cast<string>(m["SourceResourceId"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<bool>(boost::any_cast<bool>(m["TDEStatus"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBClusterRequest() = default;
};
class CreateDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};

  CreateDBClusterResponseBody() {}

  explicit CreateDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateDBClusterResponseBody() = default;
};
class CreateDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBClusterResponseBody> body{};

  CreateDBClusterResponse() {}

  explicit CreateDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBClusterResponse() = default;
};
class CreateDBClusterEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoAddNewNodes{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointDescription{};
  shared_ptr<string> endpointConfig{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> nodes{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> readWriteMode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDBClusterEndpointRequest() {}

  explicit CreateDBClusterEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAddNewNodes) {
      res["AutoAddNewNodes"] = boost::any(*autoAddNewNodes);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointDescription) {
      res["DBEndpointDescription"] = boost::any(*DBEndpointDescription);
    }
    if (endpointConfig) {
      res["EndpointConfig"] = boost::any(*endpointConfig);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readWriteMode) {
      res["ReadWriteMode"] = boost::any(*readWriteMode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAddNewNodes") != m.end() && !m["AutoAddNewNodes"].empty()) {
      autoAddNewNodes = make_shared<string>(boost::any_cast<string>(m["AutoAddNewNodes"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointDescription") != m.end() && !m["DBEndpointDescription"].empty()) {
      DBEndpointDescription = make_shared<string>(boost::any_cast<string>(m["DBEndpointDescription"]));
    }
    if (m.find("EndpointConfig") != m.end() && !m["EndpointConfig"].empty()) {
      endpointConfig = make_shared<string>(boost::any_cast<string>(m["EndpointConfig"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadWriteMode") != m.end() && !m["ReadWriteMode"].empty()) {
      readWriteMode = make_shared<string>(boost::any_cast<string>(m["ReadWriteMode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateDBClusterEndpointRequest() = default;
};
class CreateDBClusterEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDBClusterEndpointResponseBody() {}

  explicit CreateDBClusterEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBClusterEndpointResponseBody() = default;
};
class CreateDBClusterEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBClusterEndpointResponseBody> body{};

  CreateDBClusterEndpointResponse() {}

  explicit CreateDBClusterEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBClusterEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBClusterEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBClusterEndpointResponse() = default;
};
class CreateDBEndpointAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> netType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDBEndpointAddressRequest() {}

  explicit CreateDBEndpointAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateDBEndpointAddressRequest() = default;
};
class CreateDBEndpointAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDBEndpointAddressResponseBody() {}

  explicit CreateDBEndpointAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBEndpointAddressResponseBody() = default;
};
class CreateDBEndpointAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBEndpointAddressResponseBody> body{};

  CreateDBEndpointAddressResponse() {}

  explicit CreateDBEndpointAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBEndpointAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBEndpointAddressResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBEndpointAddressResponse() = default;
};
class CreateDBLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBLinkName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceDBName{};
  shared_ptr<string> targetDBAccount{};
  shared_ptr<string> targetDBInstanceName{};
  shared_ptr<string> targetDBName{};
  shared_ptr<string> targetDBPasswd{};
  shared_ptr<string> targetIp{};
  shared_ptr<string> targetPort{};
  shared_ptr<string> vpcId{};

  CreateDBLinkRequest() {}

  explicit CreateDBLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBLinkName) {
      res["DBLinkName"] = boost::any(*DBLinkName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sourceDBName) {
      res["SourceDBName"] = boost::any(*sourceDBName);
    }
    if (targetDBAccount) {
      res["TargetDBAccount"] = boost::any(*targetDBAccount);
    }
    if (targetDBInstanceName) {
      res["TargetDBInstanceName"] = boost::any(*targetDBInstanceName);
    }
    if (targetDBName) {
      res["TargetDBName"] = boost::any(*targetDBName);
    }
    if (targetDBPasswd) {
      res["TargetDBPasswd"] = boost::any(*targetDBPasswd);
    }
    if (targetIp) {
      res["TargetIp"] = boost::any(*targetIp);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBLinkName") != m.end() && !m["DBLinkName"].empty()) {
      DBLinkName = make_shared<string>(boost::any_cast<string>(m["DBLinkName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SourceDBName") != m.end() && !m["SourceDBName"].empty()) {
      sourceDBName = make_shared<string>(boost::any_cast<string>(m["SourceDBName"]));
    }
    if (m.find("TargetDBAccount") != m.end() && !m["TargetDBAccount"].empty()) {
      targetDBAccount = make_shared<string>(boost::any_cast<string>(m["TargetDBAccount"]));
    }
    if (m.find("TargetDBInstanceName") != m.end() && !m["TargetDBInstanceName"].empty()) {
      targetDBInstanceName = make_shared<string>(boost::any_cast<string>(m["TargetDBInstanceName"]));
    }
    if (m.find("TargetDBName") != m.end() && !m["TargetDBName"].empty()) {
      targetDBName = make_shared<string>(boost::any_cast<string>(m["TargetDBName"]));
    }
    if (m.find("TargetDBPasswd") != m.end() && !m["TargetDBPasswd"].empty()) {
      targetDBPasswd = make_shared<string>(boost::any_cast<string>(m["TargetDBPasswd"]));
    }
    if (m.find("TargetIp") != m.end() && !m["TargetIp"].empty()) {
      targetIp = make_shared<string>(boost::any_cast<string>(m["TargetIp"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<string>(boost::any_cast<string>(m["TargetPort"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateDBLinkRequest() = default;
};
class CreateDBLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDBLinkResponseBody() {}

  explicit CreateDBLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBLinkResponseBody() = default;
};
class CreateDBLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBLinkResponseBody> body{};

  CreateDBLinkResponse() {}

  explicit CreateDBLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBLinkResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBLinkResponse() = default;
};
class CreateDBNodesRequestDBNode : public Darabonba::Model {
public:
  shared_ptr<string> targetClass{};
  shared_ptr<string> zoneId{};

  CreateDBNodesRequestDBNode() {}

  explicit CreateDBNodesRequestDBNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetClass) {
      res["TargetClass"] = boost::any(*targetClass);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetClass") != m.end() && !m["TargetClass"].empty()) {
      targetClass = make_shared<string>(boost::any_cast<string>(m["TargetClass"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBNodesRequestDBNode() = default;
};
class CreateDBNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<CreateDBNodesRequestDBNode>> DBNode{};
  shared_ptr<string> endpointBindList{};
  shared_ptr<string> imciSwitch{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDBNodesRequest() {}

  explicit CreateDBNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNode) {
      vector<boost::any> temp1;
      for(auto item1:*DBNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNode"] = boost::any(temp1);
    }
    if (endpointBindList) {
      res["EndpointBindList"] = boost::any(*endpointBindList);
    }
    if (imciSwitch) {
      res["ImciSwitch"] = boost::any(*imciSwitch);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNode") != m.end() && !m["DBNode"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNode"].type()) {
        vector<CreateDBNodesRequestDBNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDBNodesRequestDBNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNode = make_shared<vector<CreateDBNodesRequestDBNode>>(expect1);
      }
    }
    if (m.find("EndpointBindList") != m.end() && !m["EndpointBindList"].empty()) {
      endpointBindList = make_shared<string>(boost::any_cast<string>(m["EndpointBindList"]));
    }
    if (m.find("ImciSwitch") != m.end() && !m["ImciSwitch"].empty()) {
      imciSwitch = make_shared<string>(boost::any_cast<string>(m["ImciSwitch"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateDBNodesRequest() = default;
};
class CreateDBNodesResponseBodyDBNodeIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> DBNodeId{};

  CreateDBNodesResponseBodyDBNodeIds() {}

  explicit CreateDBNodesResponseBodyDBNodeIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBNodeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBNodeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBNodeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDBNodesResponseBodyDBNodeIds() = default;
};
class CreateDBNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<CreateDBNodesResponseBodyDBNodeIds> DBNodeIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDBNodesResponseBody() {}

  explicit CreateDBNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = DBNodeIds ? boost::any(DBNodeIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBNodeIds"].type()) {
        CreateDBNodesResponseBodyDBNodeIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBNodeIds"]));
        DBNodeIds = make_shared<CreateDBNodesResponseBodyDBNodeIds>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBNodesResponseBody() = default;
};
class CreateDBNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBNodesResponseBody> body{};

  CreateDBNodesResponse() {}

  explicit CreateDBNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBNodesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBNodesResponse() = default;
};
class CreateDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> characterSetName{};
  shared_ptr<string> collate{};
  shared_ptr<string> ctype{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBDescription{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDatabaseRequest() {}

  explicit CreateDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (characterSetName) {
      res["CharacterSetName"] = boost::any(*characterSetName);
    }
    if (collate) {
      res["Collate"] = boost::any(*collate);
    }
    if (ctype) {
      res["Ctype"] = boost::any(*ctype);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBDescription) {
      res["DBDescription"] = boost::any(*DBDescription);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("CharacterSetName") != m.end() && !m["CharacterSetName"].empty()) {
      characterSetName = make_shared<string>(boost::any_cast<string>(m["CharacterSetName"]));
    }
    if (m.find("Collate") != m.end() && !m["Collate"].empty()) {
      collate = make_shared<string>(boost::any_cast<string>(m["Collate"]));
    }
    if (m.find("Ctype") != m.end() && !m["Ctype"].empty()) {
      ctype = make_shared<string>(boost::any_cast<string>(m["Ctype"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBDescription") != m.end() && !m["DBDescription"].empty()) {
      DBDescription = make_shared<string>(boost::any_cast<string>(m["DBDescription"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateDatabaseRequest() = default;
};
class CreateDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDatabaseResponseBody() {}

  explicit CreateDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatabaseResponseBody() = default;
};
class CreateDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDatabaseResponseBody> body{};

  CreateDatabaseResponse() {}

  explicit CreateDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatabaseResponse() = default;
};
class CreateGlobalDatabaseNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> GDNDescription{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  CreateGlobalDatabaseNetworkRequest() {}

  explicit CreateGlobalDatabaseNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (GDNDescription) {
      res["GDNDescription"] = boost::any(*GDNDescription);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GDNDescription") != m.end() && !m["GDNDescription"].empty()) {
      GDNDescription = make_shared<string>(boost::any_cast<string>(m["GDNDescription"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateGlobalDatabaseNetworkRequest() = default;
};
class CreateGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> GDNId{};
  shared_ptr<string> requestId{};

  CreateGlobalDatabaseNetworkResponseBody() {}

  explicit CreateGlobalDatabaseNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGlobalDatabaseNetworkResponseBody() = default;
};
class CreateGlobalDatabaseNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGlobalDatabaseNetworkResponseBody> body{};

  CreateGlobalDatabaseNetworkResponse() {}

  explicit CreateGlobalDatabaseNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGlobalDatabaseNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGlobalDatabaseNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGlobalDatabaseNetworkResponse() = default;
};
class CreateParameterGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterGroupDesc{};
  shared_ptr<string> parameterGroupName{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateParameterGroupRequest() {}

  explicit CreateParameterGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterGroupDesc) {
      res["ParameterGroupDesc"] = boost::any(*parameterGroupDesc);
    }
    if (parameterGroupName) {
      res["ParameterGroupName"] = boost::any(*parameterGroupName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterGroupDesc") != m.end() && !m["ParameterGroupDesc"].empty()) {
      parameterGroupDesc = make_shared<string>(boost::any_cast<string>(m["ParameterGroupDesc"]));
    }
    if (m.find("ParameterGroupName") != m.end() && !m["ParameterGroupName"].empty()) {
      parameterGroupName = make_shared<string>(boost::any_cast<string>(m["ParameterGroupName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateParameterGroupRequest() = default;
};
class CreateParameterGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> requestId{};

  CreateParameterGroupResponseBody() {}

  explicit CreateParameterGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateParameterGroupResponseBody() = default;
};
class CreateParameterGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateParameterGroupResponseBody> body{};

  CreateParameterGroupResponse() {}

  explicit CreateParameterGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateParameterGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateParameterGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateParameterGroupResponse() = default;
};
class CreateStoragePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> period{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> storageClass{};
  shared_ptr<string> storageType{};
  shared_ptr<string> usedTime{};

  CreateStoragePlanRequest() {}

  explicit CreateStoragePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
  }


  virtual ~CreateStoragePlanRequest() = default;
};
class CreateStoragePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateStoragePlanResponseBody() {}

  explicit CreateStoragePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateStoragePlanResponseBody() = default;
};
class CreateStoragePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateStoragePlanResponseBody> body{};

  CreateStoragePlanResponse() {}

  explicit CreateStoragePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateStoragePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStoragePlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStoragePlanResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteBackupRequest() {}

  explicit DeleteBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteBackupRequest() = default;
};
class DeleteBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBackupResponseBody() {}

  explicit DeleteBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteBackupResponseBody() = default;
};
class DeleteBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBackupResponseBody> body{};

  DeleteBackupResponse() {}

  explicit DeleteBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBackupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBackupResponse() = default;
};
class DeleteDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPolicyOnClusterDeletion{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBClusterRequest() {}

  explicit DeleteDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPolicyOnClusterDeletion) {
      res["BackupRetentionPolicyOnClusterDeletion"] = boost::any(*backupRetentionPolicyOnClusterDeletion);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPolicyOnClusterDeletion") != m.end() && !m["BackupRetentionPolicyOnClusterDeletion"].empty()) {
      backupRetentionPolicyOnClusterDeletion = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPolicyOnClusterDeletion"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBClusterRequest() = default;
};
class DeleteDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBClusterResponseBody() {}

  explicit DeleteDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBClusterResponseBody() = default;
};
class DeleteDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterResponse() = default;
};
class DeleteDBClusterEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBClusterEndpointRequest() {}

  explicit DeleteDBClusterEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBClusterEndpointRequest() = default;
};
class DeleteDBClusterEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBClusterEndpointResponseBody() {}

  explicit DeleteDBClusterEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBClusterEndpointResponseBody() = default;
};
class DeleteDBClusterEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBClusterEndpointResponseBody> body{};

  DeleteDBClusterEndpointResponse() {}

  explicit DeleteDBClusterEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBClusterEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterEndpointResponse() = default;
};
class DeleteDBEndpointAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> netType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBEndpointAddressRequest() {}

  explicit DeleteDBEndpointAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBEndpointAddressRequest() = default;
};
class DeleteDBEndpointAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBEndpointAddressResponseBody() {}

  explicit DeleteDBEndpointAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBEndpointAddressResponseBody() = default;
};
class DeleteDBEndpointAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBEndpointAddressResponseBody> body{};

  DeleteDBEndpointAddressResponse() {}

  explicit DeleteDBEndpointAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBEndpointAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBEndpointAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBEndpointAddressResponse() = default;
};
class DeleteDBLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBLinkName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBLinkRequest() {}

  explicit DeleteDBLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBLinkName) {
      res["DBLinkName"] = boost::any(*DBLinkName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBLinkName") != m.end() && !m["DBLinkName"].empty()) {
      DBLinkName = make_shared<string>(boost::any_cast<string>(m["DBLinkName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBLinkRequest() = default;
};
class DeleteDBLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBLinkResponseBody() {}

  explicit DeleteDBLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBLinkResponseBody() = default;
};
class DeleteDBLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBLinkResponseBody> body{};

  DeleteDBLinkResponse() {}

  explicit DeleteDBLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBLinkResponse() = default;
};
class DeleteDBNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<string>> DBNodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBNodesRequest() {}

  explicit DeleteDBNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBNodeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBNodeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBNodeId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBNodesRequest() = default;
};
class DeleteDBNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  DeleteDBNodesResponseBody() {}

  explicit DeleteDBNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBNodesResponseBody() = default;
};
class DeleteDBNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBNodesResponseBody> body{};

  DeleteDBNodesResponse() {}

  explicit DeleteDBNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBNodesResponse() = default;
};
class DeleteDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDatabaseRequest() {}

  explicit DeleteDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDatabaseRequest() = default;
};
class DeleteDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatabaseResponseBody() {}

  explicit DeleteDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDatabaseResponseBody() = default;
};
class DeleteDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDatabaseResponseBody> body{};

  DeleteDatabaseResponse() {}

  explicit DeleteDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatabaseResponse() = default;
};
class DeleteGlobalDatabaseNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> GDNId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteGlobalDatabaseNetworkRequest() {}

  explicit DeleteGlobalDatabaseNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGlobalDatabaseNetworkRequest() = default;
};
class DeleteGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGlobalDatabaseNetworkResponseBody() {}

  explicit DeleteGlobalDatabaseNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGlobalDatabaseNetworkResponseBody() = default;
};
class DeleteGlobalDatabaseNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGlobalDatabaseNetworkResponseBody> body{};

  DeleteGlobalDatabaseNetworkResponse() {}

  explicit DeleteGlobalDatabaseNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGlobalDatabaseNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGlobalDatabaseNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGlobalDatabaseNetworkResponse() = default;
};
class DeleteMaskingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ruleNameList{};

  DeleteMaskingRulesRequest() {}

  explicit DeleteMaskingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ruleNameList) {
      res["RuleNameList"] = boost::any(*ruleNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RuleNameList") != m.end() && !m["RuleNameList"].empty()) {
      ruleNameList = make_shared<string>(boost::any_cast<string>(m["RuleNameList"]));
    }
  }


  virtual ~DeleteMaskingRulesRequest() = default;
};
class DeleteMaskingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteMaskingRulesResponseBody() {}

  explicit DeleteMaskingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteMaskingRulesResponseBody() = default;
};
class DeleteMaskingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteMaskingRulesResponseBody> body{};

  DeleteMaskingRulesResponse() {}

  explicit DeleteMaskingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMaskingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMaskingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMaskingRulesResponse() = default;
};
class DeleteParameterGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteParameterGroupRequest() {}

  explicit DeleteParameterGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteParameterGroupRequest() = default;
};
class DeleteParameterGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteParameterGroupResponseBody() {}

  explicit DeleteParameterGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteParameterGroupResponseBody() = default;
};
class DeleteParameterGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteParameterGroupResponseBody> body{};

  DeleteParameterGroupResponse() {}

  explicit DeleteParameterGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteParameterGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteParameterGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteParameterGroupResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsDatabasePrivileges : public Darabonba::Model {
public:
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> DBName{};

  DescribeAccountsResponseBodyAccountsDatabasePrivileges() {}

  explicit DescribeAccountsResponseBodyAccountsDatabasePrivileges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsDatabasePrivileges() = default;
};
class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountLockState{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPasswordValidTime{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsDatabasePrivileges>> databasePrivileges{};

  DescribeAccountsResponseBodyAccounts() {}

  explicit DescribeAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountLockState) {
      res["AccountLockState"] = boost::any(*accountLockState);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPasswordValidTime) {
      res["AccountPasswordValidTime"] = boost::any(*accountPasswordValidTime);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (databasePrivileges) {
      vector<boost::any> temp1;
      for(auto item1:*databasePrivileges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatabasePrivileges"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountLockState") != m.end() && !m["AccountLockState"].empty()) {
      accountLockState = make_shared<string>(boost::any_cast<string>(m["AccountLockState"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPasswordValidTime") != m.end() && !m["AccountPasswordValidTime"].empty()) {
      accountPasswordValidTime = make_shared<string>(boost::any_cast<string>(m["AccountPasswordValidTime"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DatabasePrivileges") != m.end() && !m["DatabasePrivileges"].empty()) {
      if (typeid(vector<boost::any>) == m["DatabasePrivileges"].type()) {
        vector<DescribeAccountsResponseBodyAccountsDatabasePrivileges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatabasePrivileges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsDatabasePrivileges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        databasePrivileges = make_shared<vector<DescribeAccountsResponseBodyAccountsDatabasePrivileges>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccounts() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccounts>> accounts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      vector<boost::any> temp1;
      for(auto item1:*accounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accounts"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(vector<boost::any>) == m["Accounts"].type()) {
        vector<DescribeAccountsResponseBodyAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accounts = make_shared<vector<DescribeAccountsResponseBodyAccounts>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeAutoRenewAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAutoRenewAttributeRequest() {}

  explicit DescribeAutoRenewAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeAutoRenewAttributeRequest() = default;
};
class DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewEnabled{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> duration{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renewalStatus{};

  DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() {}

  explicit DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewEnabled) {
      res["AutoRenewEnabled"] = boost::any(*autoRenewEnabled);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewEnabled") != m.end() && !m["AutoRenewEnabled"].empty()) {
      autoRenewEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewEnabled"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() = default;
};
class DescribeAutoRenewAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>> autoRenewAttribute{};

  DescribeAutoRenewAttributeResponseBodyItems() {}

  explicit DescribeAutoRenewAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*autoRenewAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoRenewAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewAttribute") != m.end() && !m["AutoRenewAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoRenewAttribute"].type()) {
        vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoRenewAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoRenewAttribute = make_shared<vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBodyItems() = default;
};
class DescribeAutoRenewAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAutoRenewAttributeResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeAutoRenewAttributeResponseBody() {}

  explicit DescribeAutoRenewAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeAutoRenewAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeAutoRenewAttributeResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBody() = default;
};
class DescribeAutoRenewAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAutoRenewAttributeResponseBody> body{};

  DescribeAutoRenewAttributeResponse() {}

  explicit DescribeAutoRenewAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAutoRenewAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoRenewAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoRenewAttributeResponse() = default;
};
class DescribeBackupLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeBackupLogsRequest() {}

  explicit DescribeBackupLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupLogsRequest() = default;
};
class DescribeBackupLogsResponseBodyItemsBackupLog : public Darabonba::Model {
public:
  shared_ptr<string> backupLogEndTime{};
  shared_ptr<string> backupLogId{};
  shared_ptr<string> backupLogName{};
  shared_ptr<string> backupLogSize{};
  shared_ptr<string> backupLogStartTime{};
  shared_ptr<string> downloadLink{};
  shared_ptr<string> intranetDownloadLink{};
  shared_ptr<string> linkExpiredTime{};

  DescribeBackupLogsResponseBodyItemsBackupLog() {}

  explicit DescribeBackupLogsResponseBodyItemsBackupLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupLogEndTime) {
      res["BackupLogEndTime"] = boost::any(*backupLogEndTime);
    }
    if (backupLogId) {
      res["BackupLogId"] = boost::any(*backupLogId);
    }
    if (backupLogName) {
      res["BackupLogName"] = boost::any(*backupLogName);
    }
    if (backupLogSize) {
      res["BackupLogSize"] = boost::any(*backupLogSize);
    }
    if (backupLogStartTime) {
      res["BackupLogStartTime"] = boost::any(*backupLogStartTime);
    }
    if (downloadLink) {
      res["DownloadLink"] = boost::any(*downloadLink);
    }
    if (intranetDownloadLink) {
      res["IntranetDownloadLink"] = boost::any(*intranetDownloadLink);
    }
    if (linkExpiredTime) {
      res["LinkExpiredTime"] = boost::any(*linkExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupLogEndTime") != m.end() && !m["BackupLogEndTime"].empty()) {
      backupLogEndTime = make_shared<string>(boost::any_cast<string>(m["BackupLogEndTime"]));
    }
    if (m.find("BackupLogId") != m.end() && !m["BackupLogId"].empty()) {
      backupLogId = make_shared<string>(boost::any_cast<string>(m["BackupLogId"]));
    }
    if (m.find("BackupLogName") != m.end() && !m["BackupLogName"].empty()) {
      backupLogName = make_shared<string>(boost::any_cast<string>(m["BackupLogName"]));
    }
    if (m.find("BackupLogSize") != m.end() && !m["BackupLogSize"].empty()) {
      backupLogSize = make_shared<string>(boost::any_cast<string>(m["BackupLogSize"]));
    }
    if (m.find("BackupLogStartTime") != m.end() && !m["BackupLogStartTime"].empty()) {
      backupLogStartTime = make_shared<string>(boost::any_cast<string>(m["BackupLogStartTime"]));
    }
    if (m.find("DownloadLink") != m.end() && !m["DownloadLink"].empty()) {
      downloadLink = make_shared<string>(boost::any_cast<string>(m["DownloadLink"]));
    }
    if (m.find("IntranetDownloadLink") != m.end() && !m["IntranetDownloadLink"].empty()) {
      intranetDownloadLink = make_shared<string>(boost::any_cast<string>(m["IntranetDownloadLink"]));
    }
    if (m.find("LinkExpiredTime") != m.end() && !m["LinkExpiredTime"].empty()) {
      linkExpiredTime = make_shared<string>(boost::any_cast<string>(m["LinkExpiredTime"]));
    }
  }


  virtual ~DescribeBackupLogsResponseBodyItemsBackupLog() = default;
};
class DescribeBackupLogsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupLogsResponseBodyItemsBackupLog>> backupLog{};

  DescribeBackupLogsResponseBodyItems() {}

  explicit DescribeBackupLogsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupLog) {
      vector<boost::any> temp1;
      for(auto item1:*backupLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupLog") != m.end() && !m["BackupLog"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupLog"].type()) {
        vector<DescribeBackupLogsResponseBodyItemsBackupLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupLogsResponseBodyItemsBackupLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupLog = make_shared<vector<DescribeBackupLogsResponseBodyItemsBackupLog>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupLogsResponseBodyItems() = default;
};
class DescribeBackupLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupLogsResponseBodyItems> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalRecordCount{};

  DescribeBackupLogsResponseBody() {}

  explicit DescribeBackupLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupLogsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupLogsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<string>(boost::any_cast<string>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<string>(boost::any_cast<string>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeBackupLogsResponseBody() = default;
};
class DescribeBackupLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupLogsResponseBody> body{};

  DescribeBackupLogsResponse() {}

  explicit DescribeBackupLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupLogsResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupFrequency{};
  shared_ptr<string> backupRetentionPolicyOnClusterDeletion{};
  shared_ptr<string> dataLevel1BackupRetentionPeriod{};
  shared_ptr<string> dataLevel2BackupRetentionPeriod{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> preferredNextBackupTime{};
  shared_ptr<string> requestId{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupFrequency) {
      res["BackupFrequency"] = boost::any(*backupFrequency);
    }
    if (backupRetentionPolicyOnClusterDeletion) {
      res["BackupRetentionPolicyOnClusterDeletion"] = boost::any(*backupRetentionPolicyOnClusterDeletion);
    }
    if (dataLevel1BackupRetentionPeriod) {
      res["DataLevel1BackupRetentionPeriod"] = boost::any(*dataLevel1BackupRetentionPeriod);
    }
    if (dataLevel2BackupRetentionPeriod) {
      res["DataLevel2BackupRetentionPeriod"] = boost::any(*dataLevel2BackupRetentionPeriod);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (preferredNextBackupTime) {
      res["PreferredNextBackupTime"] = boost::any(*preferredNextBackupTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupFrequency") != m.end() && !m["BackupFrequency"].empty()) {
      backupFrequency = make_shared<string>(boost::any_cast<string>(m["BackupFrequency"]));
    }
    if (m.find("BackupRetentionPolicyOnClusterDeletion") != m.end() && !m["BackupRetentionPolicyOnClusterDeletion"].empty()) {
      backupRetentionPolicyOnClusterDeletion = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPolicyOnClusterDeletion"]));
    }
    if (m.find("DataLevel1BackupRetentionPeriod") != m.end() && !m["DataLevel1BackupRetentionPeriod"].empty()) {
      dataLevel1BackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["DataLevel1BackupRetentionPeriod"]));
    }
    if (m.find("DataLevel2BackupRetentionPeriod") != m.end() && !m["DataLevel2BackupRetentionPeriod"].empty()) {
      dataLevel2BackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["DataLevel2BackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("PreferredNextBackupTime") != m.end() && !m["PreferredNextBackupTime"].empty()) {
      preferredNextBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredNextBackupTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupJobId{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeBackupTasksRequest() {}

  explicit DescribeBackupTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJobId) {
      res["BackupJobId"] = boost::any(*backupJobId);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJobId") != m.end() && !m["BackupJobId"].empty()) {
      backupJobId = make_shared<string>(boost::any_cast<string>(m["BackupJobId"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeBackupTasksRequest() = default;
};
class DescribeBackupTasksResponseBodyItemsBackupJob : public Darabonba::Model {
public:
  shared_ptr<string> backupJobId{};
  shared_ptr<string> backupProgressStatus{};
  shared_ptr<string> jobMode{};
  shared_ptr<string> process{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskAction{};

  DescribeBackupTasksResponseBodyItemsBackupJob() {}

  explicit DescribeBackupTasksResponseBodyItemsBackupJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJobId) {
      res["BackupJobId"] = boost::any(*backupJobId);
    }
    if (backupProgressStatus) {
      res["BackupProgressStatus"] = boost::any(*backupProgressStatus);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJobId") != m.end() && !m["BackupJobId"].empty()) {
      backupJobId = make_shared<string>(boost::any_cast<string>(m["BackupJobId"]));
    }
    if (m.find("BackupProgressStatus") != m.end() && !m["BackupProgressStatus"].empty()) {
      backupProgressStatus = make_shared<string>(boost::any_cast<string>(m["BackupProgressStatus"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
  }


  virtual ~DescribeBackupTasksResponseBodyItemsBackupJob() = default;
};
class DescribeBackupTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupTasksResponseBodyItemsBackupJob>> backupJob{};

  DescribeBackupTasksResponseBodyItems() {}

  explicit DescribeBackupTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJob) {
      vector<boost::any> temp1;
      for(auto item1:*backupJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJob") != m.end() && !m["BackupJob"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupJob"].type()) {
        vector<DescribeBackupTasksResponseBodyItemsBackupJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupTasksResponseBodyItemsBackupJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupJob = make_shared<vector<DescribeBackupTasksResponseBodyItemsBackupJob>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupTasksResponseBodyItems() = default;
};
class DescribeBackupTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupTasksResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeBackupTasksResponseBody() {}

  explicit DescribeBackupTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupTasksResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupTasksResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupTasksResponseBody() = default;
};
class DescribeBackupTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupTasksResponseBody> body{};

  DescribeBackupTasksResponse() {}

  explicit DescribeBackupTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupTasksResponse() = default;
};
class DescribeBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyItemsBackup : public Darabonba::Model {
public:
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupSetSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupsLevel{};
  shared_ptr<string> consistentTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> isAvail{};

  DescribeBackupsResponseBodyItemsBackup() {}

  explicit DescribeBackupsResponseBodyItemsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSetSize) {
      res["BackupSetSize"] = boost::any(*backupSetSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupsLevel) {
      res["BackupsLevel"] = boost::any(*backupsLevel);
    }
    if (consistentTime) {
      res["ConsistentTime"] = boost::any(*consistentTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (isAvail) {
      res["IsAvail"] = boost::any(*isAvail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSetSize") != m.end() && !m["BackupSetSize"].empty()) {
      backupSetSize = make_shared<string>(boost::any_cast<string>(m["BackupSetSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupsLevel") != m.end() && !m["BackupsLevel"].empty()) {
      backupsLevel = make_shared<string>(boost::any_cast<string>(m["BackupsLevel"]));
    }
    if (m.find("ConsistentTime") != m.end() && !m["ConsistentTime"].empty()) {
      consistentTime = make_shared<string>(boost::any_cast<string>(m["ConsistentTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("IsAvail") != m.end() && !m["IsAvail"].empty()) {
      isAvail = make_shared<string>(boost::any_cast<string>(m["IsAvail"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyItemsBackup() = default;
};
class DescribeBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyItemsBackup>> backup{};

  DescribeBackupsResponseBodyItems() {}

  explicit DescribeBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeBackupsResponseBodyItemsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyItemsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeBackupsResponseBodyItemsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBodyItems() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupsResponseBodyItems> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalRecordCount{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<string>(boost::any_cast<string>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<string>(boost::any_cast<string>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeBackupsResponseBody() = default;
};
class DescribeBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponse() = default;
};
class DescribeCharacterSetNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeCharacterSetNameRequest() {}

  explicit DescribeCharacterSetNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeCharacterSetNameRequest() = default;
};
class DescribeCharacterSetNameResponseBodyCharacterSetNameItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> characterSetName{};

  DescribeCharacterSetNameResponseBodyCharacterSetNameItems() {}

  explicit DescribeCharacterSetNameResponseBodyCharacterSetNameItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterSetName) {
      res["CharacterSetName"] = boost::any(*characterSetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterSetName") != m.end() && !m["CharacterSetName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CharacterSetName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CharacterSetName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      characterSetName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCharacterSetNameResponseBodyCharacterSetNameItems() = default;
};
class DescribeCharacterSetNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCharacterSetNameResponseBodyCharacterSetNameItems> characterSetNameItems{};
  shared_ptr<string> engine{};
  shared_ptr<string> requestId{};

  DescribeCharacterSetNameResponseBody() {}

  explicit DescribeCharacterSetNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterSetNameItems) {
      res["CharacterSetNameItems"] = characterSetNameItems ? boost::any(characterSetNameItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterSetNameItems") != m.end() && !m["CharacterSetNameItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["CharacterSetNameItems"].type()) {
        DescribeCharacterSetNameResponseBodyCharacterSetNameItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CharacterSetNameItems"]));
        characterSetNameItems = make_shared<DescribeCharacterSetNameResponseBodyCharacterSetNameItems>(model1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCharacterSetNameResponseBody() = default;
};
class DescribeCharacterSetNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCharacterSetNameResponseBody> body{};

  DescribeCharacterSetNameResponse() {}

  explicit DescribeCharacterSetNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCharacterSetNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCharacterSetNameResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCharacterSetNameResponse() = default;
};
class DescribeDBClusterAccessWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterAccessWhitelistRequest() {}

  explicit DescribeDBClusterAccessWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistRequest() = default;
};
class DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};

  DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup() {}

  explicit DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup() = default;
};
class DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup>> DBClusterSecurityGroup{};

  DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups() {}

  explicit DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterSecurityGroup) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusterSecurityGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusterSecurityGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterSecurityGroup") != m.end() && !m["DBClusterSecurityGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusterSecurityGroup"].type()) {
        vector<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusterSecurityGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusterSecurityGroup = make_shared<vector<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups() = default;
};
class DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> securityIps{};

  DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray() {}

  explicit DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray() = default;
};
class DescribeDBClusterAccessWhitelistResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray>> DBClusterIPArray{};

  DescribeDBClusterAccessWhitelistResponseBodyItems() {}

  explicit DescribeDBClusterAccessWhitelistResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArray) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusterIPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusterIPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArray") != m.end() && !m["DBClusterIPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusterIPArray"].type()) {
        vector<DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusterIPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusterIPArray = make_shared<vector<DescribeDBClusterAccessWhitelistResponseBodyItemsDBClusterIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponseBodyItems() = default;
};
class DescribeDBClusterAccessWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups> DBClusterSecurityGroups{};
  shared_ptr<DescribeDBClusterAccessWhitelistResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAccessWhitelistResponseBody() {}

  explicit DescribeDBClusterAccessWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterSecurityGroups) {
      res["DBClusterSecurityGroups"] = DBClusterSecurityGroups ? boost::any(DBClusterSecurityGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterSecurityGroups") != m.end() && !m["DBClusterSecurityGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBClusterSecurityGroups"].type()) {
        DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBClusterSecurityGroups"]));
        DBClusterSecurityGroups = make_shared<DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups>(model1);
      }
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClusterAccessWhitelistResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClusterAccessWhitelistResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponseBody() = default;
};
class DescribeDBClusterAccessWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAccessWhitelistResponseBody> body{};

  DescribeDBClusterAccessWhitelistResponse() {}

  explicit DescribeDBClusterAccessWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterAccessWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAccessWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhitelistResponse() = default;
};
class DescribeDBClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterAttributeRequest() {}

  explicit DescribeDBClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeRequest() = default;
};
class DescribeDBClusterAttributeResponseBodyDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> DBNodeRole{};
  shared_ptr<string> DBNodeStatus{};
  shared_ptr<long> failoverPriority{};
  shared_ptr<string> hotReplicaMode{};
  shared_ptr<string> imciSwitch{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<string> zoneId{};

  DescribeDBClusterAttributeResponseBodyDBNodes() {}

  explicit DescribeDBClusterAttributeResponseBodyDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (DBNodeRole) {
      res["DBNodeRole"] = boost::any(*DBNodeRole);
    }
    if (DBNodeStatus) {
      res["DBNodeStatus"] = boost::any(*DBNodeStatus);
    }
    if (failoverPriority) {
      res["FailoverPriority"] = boost::any(*failoverPriority);
    }
    if (hotReplicaMode) {
      res["HotReplicaMode"] = boost::any(*hotReplicaMode);
    }
    if (imciSwitch) {
      res["ImciSwitch"] = boost::any(*imciSwitch);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("DBNodeRole") != m.end() && !m["DBNodeRole"].empty()) {
      DBNodeRole = make_shared<string>(boost::any_cast<string>(m["DBNodeRole"]));
    }
    if (m.find("DBNodeStatus") != m.end() && !m["DBNodeStatus"].empty()) {
      DBNodeStatus = make_shared<string>(boost::any_cast<string>(m["DBNodeStatus"]));
    }
    if (m.find("FailoverPriority") != m.end() && !m["FailoverPriority"].empty()) {
      failoverPriority = make_shared<long>(boost::any_cast<long>(m["FailoverPriority"]));
    }
    if (m.find("HotReplicaMode") != m.end() && !m["HotReplicaMode"].empty()) {
      hotReplicaMode = make_shared<string>(boost::any_cast<string>(m["HotReplicaMode"]));
    }
    if (m.find("ImciSwitch") != m.end() && !m["ImciSwitch"].empty()) {
      imciSwitch = make_shared<string>(boost::any_cast<string>(m["ImciSwitch"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyDBNodes() = default;
};
class DescribeDBClusterAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClusterAttributeResponseBodyTags() {}

  explicit DescribeDBClusterAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyTags() = default;
};
class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> DBVersionStatus{};
  shared_ptr<long> dataLevel1BackupChainSize{};
  shared_ptr<long> deletionLock{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<bool> isLatestVersion{};
  shared_ptr<bool> isProxyLatestVersion{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> proxyCpuCores{};
  shared_ptr<string> proxyStatus{};
  shared_ptr<string> proxyType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> SQLSize{};
  shared_ptr<long> storageMax{};
  shared_ptr<string> storageType{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> subCategory{};
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyTags>> tags{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneIds{};

  DescribeDBClusterAttributeResponseBody() {}

  explicit DescribeDBClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (DBVersionStatus) {
      res["DBVersionStatus"] = boost::any(*DBVersionStatus);
    }
    if (dataLevel1BackupChainSize) {
      res["DataLevel1BackupChainSize"] = boost::any(*dataLevel1BackupChainSize);
    }
    if (deletionLock) {
      res["DeletionLock"] = boost::any(*deletionLock);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (isProxyLatestVersion) {
      res["IsProxyLatestVersion"] = boost::any(*isProxyLatestVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (proxyCpuCores) {
      res["ProxyCpuCores"] = boost::any(*proxyCpuCores);
    }
    if (proxyStatus) {
      res["ProxyStatus"] = boost::any(*proxyStatus);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (SQLSize) {
      res["SQLSize"] = boost::any(*SQLSize);
    }
    if (storageMax) {
      res["StorageMax"] = boost::any(*storageMax);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (subCategory) {
      res["SubCategory"] = boost::any(*subCategory);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<DescribeDBClusterAttributeResponseBodyDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("DBVersionStatus") != m.end() && !m["DBVersionStatus"].empty()) {
      DBVersionStatus = make_shared<string>(boost::any_cast<string>(m["DBVersionStatus"]));
    }
    if (m.find("DataLevel1BackupChainSize") != m.end() && !m["DataLevel1BackupChainSize"].empty()) {
      dataLevel1BackupChainSize = make_shared<long>(boost::any_cast<long>(m["DataLevel1BackupChainSize"]));
    }
    if (m.find("DeletionLock") != m.end() && !m["DeletionLock"].empty()) {
      deletionLock = make_shared<long>(boost::any_cast<long>(m["DeletionLock"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLatestVersion"]));
    }
    if (m.find("IsProxyLatestVersion") != m.end() && !m["IsProxyLatestVersion"].empty()) {
      isProxyLatestVersion = make_shared<bool>(boost::any_cast<bool>(m["IsProxyLatestVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ProxyCpuCores") != m.end() && !m["ProxyCpuCores"].empty()) {
      proxyCpuCores = make_shared<string>(boost::any_cast<string>(m["ProxyCpuCores"]));
    }
    if (m.find("ProxyStatus") != m.end() && !m["ProxyStatus"].empty()) {
      proxyStatus = make_shared<string>(boost::any_cast<string>(m["ProxyStatus"]));
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SQLSize") != m.end() && !m["SQLSize"].empty()) {
      SQLSize = make_shared<long>(boost::any_cast<long>(m["SQLSize"]));
    }
    if (m.find("StorageMax") != m.end() && !m["StorageMax"].empty()) {
      storageMax = make_shared<long>(boost::any_cast<long>(m["StorageMax"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("SubCategory") != m.end() && !m["SubCategory"].empty()) {
      subCategory = make_shared<string>(boost::any_cast<string>(m["SubCategory"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDBClusterAttributeResponseBodyTags>>(expect1);
      }
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      zoneIds = make_shared<string>(boost::any_cast<string>(m["ZoneIds"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBody() = default;
};
class DescribeDBClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAttributeResponseBody> body{};

  DescribeDBClusterAttributeResponse() {}

  explicit DescribeDBClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponse() = default;
};
class DescribeDBClusterAuditLogCollectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterAuditLogCollectorRequest() {}

  explicit DescribeDBClusterAuditLogCollectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterAuditLogCollectorRequest() = default;
};
class DescribeDBClusterAuditLogCollectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> collectorStatus{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAuditLogCollectorResponseBody() {}

  explicit DescribeDBClusterAuditLogCollectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectorStatus) {
      res["CollectorStatus"] = boost::any(*collectorStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectorStatus") != m.end() && !m["CollectorStatus"].empty()) {
      collectorStatus = make_shared<string>(boost::any_cast<string>(m["CollectorStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAuditLogCollectorResponseBody() = default;
};
class DescribeDBClusterAuditLogCollectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAuditLogCollectorResponseBody> body{};

  DescribeDBClusterAuditLogCollectorResponse() {}

  explicit DescribeDBClusterAuditLogCollectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterAuditLogCollectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAuditLogCollectorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAuditLogCollectorResponse() = default;
};
class DescribeDBClusterAvailableResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeDBClusterAvailableResourcesRequest() {}

  explicit DescribeDBClusterAvailableResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesRequest() = default;
};
class DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> DBNodeClass{};

  DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources() {}

  explicit DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources() = default;
};
class DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources>> availableResources{};
  shared_ptr<string> engine{};

  DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines() {}

  explicit DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResources) {
      vector<boost::any> temp1;
      for(auto item1:*availableResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResources"] = boost::any(temp1);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResources"].type()) {
        vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResources = make_shared<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources>>(expect1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines() = default;
};
class DescribeDBClusterAvailableResourcesResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines>> supportedEngines{};
  shared_ptr<string> zoneId{};

  DescribeDBClusterAvailableResourcesResponseBodyAvailableZones() {}

  explicit DescribeDBClusterAvailableResourcesResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supportedEngines) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngines"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngines"].type()) {
        vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngines = make_shared<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZones() = default;
};
class DescribeDBClusterAvailableResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones>> availableZones{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAvailableResourcesResponseBody() {}

  explicit DescribeDBClusterAvailableResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      vector<boost::any> temp1;
      for(auto item1:*availableZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZones"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZones"].type()) {
        vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAvailableResourcesResponseBodyAvailableZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZones = make_shared<vector<DescribeDBClusterAvailableResourcesResponseBodyAvailableZones>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesResponseBody() = default;
};
class DescribeDBClusterAvailableResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAvailableResourcesResponseBody> body{};

  DescribeDBClusterAvailableResourcesResponse() {}

  explicit DescribeDBClusterAvailableResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterAvailableResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAvailableResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAvailableResourcesResponse() = default;
};
class DescribeDBClusterEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterEndpointsRequest() {}

  explicit DescribeDBClusterEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterEndpointsRequest() = default;
};
class DescribeDBClusterEndpointsResponseBodyItemsAddressItems : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};
  shared_ptr<string> privateZoneConnectionString{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcInstanceId{};

  DescribeDBClusterEndpointsResponseBodyItemsAddressItems() {}

  explicit DescribeDBClusterEndpointsResponseBodyItemsAddressItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (privateZoneConnectionString) {
      res["PrivateZoneConnectionString"] = boost::any(*privateZoneConnectionString);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("PrivateZoneConnectionString") != m.end() && !m["PrivateZoneConnectionString"].empty()) {
      privateZoneConnectionString = make_shared<string>(boost::any_cast<string>(m["PrivateZoneConnectionString"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
  }


  virtual ~DescribeDBClusterEndpointsResponseBodyItemsAddressItems() = default;
};
class DescribeDBClusterEndpointsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterEndpointsResponseBodyItemsAddressItems>> addressItems{};
  shared_ptr<string> autoAddNewNodes{};
  shared_ptr<string> DBEndpointDescription{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> endpointConfig{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> nodeWithRoles{};
  shared_ptr<string> nodes{};
  shared_ptr<string> readWriteMode{};

  DescribeDBClusterEndpointsResponseBodyItems() {}

  explicit DescribeDBClusterEndpointsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressItems) {
      vector<boost::any> temp1;
      for(auto item1:*addressItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddressItems"] = boost::any(temp1);
    }
    if (autoAddNewNodes) {
      res["AutoAddNewNodes"] = boost::any(*autoAddNewNodes);
    }
    if (DBEndpointDescription) {
      res["DBEndpointDescription"] = boost::any(*DBEndpointDescription);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (endpointConfig) {
      res["EndpointConfig"] = boost::any(*endpointConfig);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (nodeWithRoles) {
      res["NodeWithRoles"] = boost::any(*nodeWithRoles);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (readWriteMode) {
      res["ReadWriteMode"] = boost::any(*readWriteMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressItems") != m.end() && !m["AddressItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AddressItems"].type()) {
        vector<DescribeDBClusterEndpointsResponseBodyItemsAddressItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddressItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterEndpointsResponseBodyItemsAddressItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressItems = make_shared<vector<DescribeDBClusterEndpointsResponseBodyItemsAddressItems>>(expect1);
      }
    }
    if (m.find("AutoAddNewNodes") != m.end() && !m["AutoAddNewNodes"].empty()) {
      autoAddNewNodes = make_shared<string>(boost::any_cast<string>(m["AutoAddNewNodes"]));
    }
    if (m.find("DBEndpointDescription") != m.end() && !m["DBEndpointDescription"].empty()) {
      DBEndpointDescription = make_shared<string>(boost::any_cast<string>(m["DBEndpointDescription"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("EndpointConfig") != m.end() && !m["EndpointConfig"].empty()) {
      endpointConfig = make_shared<string>(boost::any_cast<string>(m["EndpointConfig"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("NodeWithRoles") != m.end() && !m["NodeWithRoles"].empty()) {
      nodeWithRoles = make_shared<string>(boost::any_cast<string>(m["NodeWithRoles"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
    if (m.find("ReadWriteMode") != m.end() && !m["ReadWriteMode"].empty()) {
      readWriteMode = make_shared<string>(boost::any_cast<string>(m["ReadWriteMode"]));
    }
  }


  virtual ~DescribeDBClusterEndpointsResponseBodyItems() = default;
};
class DescribeDBClusterEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterEndpointsResponseBodyItems>> items{};
  shared_ptr<string> requestId{};

  DescribeDBClusterEndpointsResponseBody() {}

  explicit DescribeDBClusterEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBClusterEndpointsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterEndpointsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBClusterEndpointsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterEndpointsResponseBody() = default;
};
class DescribeDBClusterEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterEndpointsResponseBody> body{};

  DescribeDBClusterEndpointsResponse() {}

  explicit DescribeDBClusterEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterEndpointsResponse() = default;
};
class DescribeDBClusterMigrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterMigrationRequest() {}

  explicit DescribeDBClusterMigrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterMigrationRequest() = default;
};
class DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems() {}

  explicit DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems() = default;
};
class DescribeDBClusterMigrationResponseBodyDBClusterEndpointList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems>> addressItems{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> endpointType{};

  DescribeDBClusterMigrationResponseBodyDBClusterEndpointList() {}

  explicit DescribeDBClusterMigrationResponseBodyDBClusterEndpointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressItems) {
      vector<boost::any> temp1;
      for(auto item1:*addressItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddressItems"] = boost::any(temp1);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressItems") != m.end() && !m["AddressItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AddressItems"].type()) {
        vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddressItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressItems = make_shared<vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointListAddressItems>>(expect1);
      }
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~DescribeDBClusterMigrationResponseBodyDBClusterEndpointList() = default;
};
class DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems() {}

  explicit DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems() = default;
};
class DescribeDBClusterMigrationResponseBodyRdsEndpointList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems>> addressItems{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> endpointType{};

  DescribeDBClusterMigrationResponseBodyRdsEndpointList() {}

  explicit DescribeDBClusterMigrationResponseBodyRdsEndpointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressItems) {
      vector<boost::any> temp1;
      for(auto item1:*addressItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddressItems"] = boost::any(temp1);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressItems") != m.end() && !m["AddressItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AddressItems"].type()) {
        vector<DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddressItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressItems = make_shared<vector<DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems>>(expect1);
      }
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~DescribeDBClusterMigrationResponseBodyRdsEndpointList() = default;
};
class DescribeDBClusterMigrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList>> DBClusterEndpointList{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterReadWriteMode{};
  shared_ptr<long> delayedSeconds{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> migrationStatus{};
  shared_ptr<vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList>> rdsEndpointList{};
  shared_ptr<string> rdsReadWriteMode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceRDSDBInstanceId{};
  shared_ptr<string> topologies{};

  DescribeDBClusterMigrationResponseBody() {}

  explicit DescribeDBClusterMigrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (DBClusterEndpointList) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusterEndpointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusterEndpointList"] = boost::any(temp1);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterReadWriteMode) {
      res["DBClusterReadWriteMode"] = boost::any(*DBClusterReadWriteMode);
    }
    if (delayedSeconds) {
      res["DelayedSeconds"] = boost::any(*delayedSeconds);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (migrationStatus) {
      res["MigrationStatus"] = boost::any(*migrationStatus);
    }
    if (rdsEndpointList) {
      vector<boost::any> temp1;
      for(auto item1:*rdsEndpointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsEndpointList"] = boost::any(temp1);
    }
    if (rdsReadWriteMode) {
      res["RdsReadWriteMode"] = boost::any(*rdsReadWriteMode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceRDSDBInstanceId) {
      res["SourceRDSDBInstanceId"] = boost::any(*sourceRDSDBInstanceId);
    }
    if (topologies) {
      res["Topologies"] = boost::any(*topologies);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DBClusterEndpointList") != m.end() && !m["DBClusterEndpointList"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusterEndpointList"].type()) {
        vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusterEndpointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterMigrationResponseBodyDBClusterEndpointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusterEndpointList = make_shared<vector<DescribeDBClusterMigrationResponseBodyDBClusterEndpointList>>(expect1);
      }
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterReadWriteMode") != m.end() && !m["DBClusterReadWriteMode"].empty()) {
      DBClusterReadWriteMode = make_shared<string>(boost::any_cast<string>(m["DBClusterReadWriteMode"]));
    }
    if (m.find("DelayedSeconds") != m.end() && !m["DelayedSeconds"].empty()) {
      delayedSeconds = make_shared<long>(boost::any_cast<long>(m["DelayedSeconds"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("MigrationStatus") != m.end() && !m["MigrationStatus"].empty()) {
      migrationStatus = make_shared<string>(boost::any_cast<string>(m["MigrationStatus"]));
    }
    if (m.find("RdsEndpointList") != m.end() && !m["RdsEndpointList"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsEndpointList"].type()) {
        vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsEndpointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterMigrationResponseBodyRdsEndpointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsEndpointList = make_shared<vector<DescribeDBClusterMigrationResponseBodyRdsEndpointList>>(expect1);
      }
    }
    if (m.find("RdsReadWriteMode") != m.end() && !m["RdsReadWriteMode"].empty()) {
      rdsReadWriteMode = make_shared<string>(boost::any_cast<string>(m["RdsReadWriteMode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceRDSDBInstanceId") != m.end() && !m["SourceRDSDBInstanceId"].empty()) {
      sourceRDSDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceRDSDBInstanceId"]));
    }
    if (m.find("Topologies") != m.end() && !m["Topologies"].empty()) {
      topologies = make_shared<string>(boost::any_cast<string>(m["Topologies"]));
    }
  }


  virtual ~DescribeDBClusterMigrationResponseBody() = default;
};
class DescribeDBClusterMigrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterMigrationResponseBody> body{};

  DescribeDBClusterMigrationResponse() {}

  explicit DescribeDBClusterMigrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterMigrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterMigrationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterMigrationResponse() = default;
};
class DescribeDBClusterMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterMonitorRequest() {}

  explicit DescribeDBClusterMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterMonitorRequest() = default;
};
class DescribeDBClusterMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> period{};
  shared_ptr<string> requestId{};

  DescribeDBClusterMonitorResponseBody() {}

  explicit DescribeDBClusterMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterMonitorResponseBody() = default;
};
class DescribeDBClusterMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterMonitorResponseBody> body{};

  DescribeDBClusterMonitorResponse() {}

  explicit DescribeDBClusterMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterMonitorResponse() = default;
};
class DescribeDBClusterParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterParametersRequest() {}

  explicit DescribeDBClusterParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterParametersRequest() = default;
};
class DescribeDBClusterParametersResponseBodyRunningParametersParameter : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<string> dataType{};
  shared_ptr<string> defaultParameterValue{};
  shared_ptr<bool> forceRestart{};
  shared_ptr<bool> isModifiable{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterStatus{};
  shared_ptr<string> parameterValue{};

  DescribeDBClusterParametersResponseBodyRunningParametersParameter() {}

  explicit DescribeDBClusterParametersResponseBodyRunningParametersParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (defaultParameterValue) {
      res["DefaultParameterValue"] = boost::any(*defaultParameterValue);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (isModifiable) {
      res["IsModifiable"] = boost::any(*isModifiable);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterStatus) {
      res["ParameterStatus"] = boost::any(*parameterStatus);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DefaultParameterValue") != m.end() && !m["DefaultParameterValue"].empty()) {
      defaultParameterValue = make_shared<string>(boost::any_cast<string>(m["DefaultParameterValue"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<bool>(boost::any_cast<bool>(m["ForceRestart"]));
    }
    if (m.find("IsModifiable") != m.end() && !m["IsModifiable"].empty()) {
      isModifiable = make_shared<bool>(boost::any_cast<bool>(m["IsModifiable"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterStatus") != m.end() && !m["ParameterStatus"].empty()) {
      parameterStatus = make_shared<string>(boost::any_cast<string>(m["ParameterStatus"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeDBClusterParametersResponseBodyRunningParametersParameter() = default;
};
class DescribeDBClusterParametersResponseBodyRunningParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterParametersResponseBodyRunningParametersParameter>> parameter{};

  DescribeDBClusterParametersResponseBodyRunningParameters() {}

  explicit DescribeDBClusterParametersResponseBodyRunningParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<DescribeDBClusterParametersResponseBodyRunningParametersParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterParametersResponseBodyRunningParametersParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<DescribeDBClusterParametersResponseBodyRunningParametersParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterParametersResponseBodyRunningParameters() = default;
};
class DescribeDBClusterParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBClusterParametersResponseBodyRunningParameters> runningParameters{};

  DescribeDBClusterParametersResponseBody() {}

  explicit DescribeDBClusterParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runningParameters) {
      res["RunningParameters"] = runningParameters ? boost::any(runningParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunningParameters") != m.end() && !m["RunningParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunningParameters"].type()) {
        DescribeDBClusterParametersResponseBodyRunningParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunningParameters"]));
        runningParameters = make_shared<DescribeDBClusterParametersResponseBodyRunningParameters>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterParametersResponseBody() = default;
};
class DescribeDBClusterParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterParametersResponseBody> body{};

  DescribeDBClusterParametersResponse() {}

  explicit DescribeDBClusterParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterParametersResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceRequest() {}

  explicit DescribeDBClusterPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceRequest() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<string> value{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItemValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItemValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItemValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItemValue") != m.end() && !m["PerformanceItemValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItemValue"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItemValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItemValue = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> measurement{};
  shared_ptr<string> metricName{};
  shared_ptr<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (measurement) {
      res["Measurement"] = boost::any(*measurement);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (points) {
      res["Points"] = points ? boost::any(points->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("Measurement") != m.end() && !m["Measurement"].empty()) {
      measurement = make_shared<string>(boost::any_cast<string>(m["Measurement"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      if (typeid(map<string, boost::any>) == m["Points"].type()) {
        DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Points"]));
        points = make_shared<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItemPoints>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItem") != m.end() && !m["PerformanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItem"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItem = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysPerformanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBClusterPerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceResponseBody() {}

  explicit DescribeDBClusterPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBClusterPerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBClusterPerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBody() = default;
};
class DescribeDBClusterPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponse() = default;
};
class DescribeDBClusterSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterSSLRequest() {}

  explicit DescribeDBClusterSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterSSLRequest() = default;
};
class DescribeDBClusterSSLResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> SSLConnectionString{};
  shared_ptr<string> SSLEnabled{};
  shared_ptr<string> SSLExpireTime{};

  DescribeDBClusterSSLResponseBodyItems() {}

  explicit DescribeDBClusterSSLResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (SSLConnectionString) {
      res["SSLConnectionString"] = boost::any(*SSLConnectionString);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    if (SSLExpireTime) {
      res["SSLExpireTime"] = boost::any(*SSLExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("SSLConnectionString") != m.end() && !m["SSLConnectionString"].empty()) {
      SSLConnectionString = make_shared<string>(boost::any_cast<string>(m["SSLConnectionString"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<string>(boost::any_cast<string>(m["SSLEnabled"]));
    }
    if (m.find("SSLExpireTime") != m.end() && !m["SSLExpireTime"].empty()) {
      SSLExpireTime = make_shared<string>(boost::any_cast<string>(m["SSLExpireTime"]));
    }
  }


  virtual ~DescribeDBClusterSSLResponseBodyItems() = default;
};
class DescribeDBClusterSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterSSLResponseBodyItems>> items{};
  shared_ptr<string> requestId{};
  shared_ptr<string> SSLAutoRotate{};

  DescribeDBClusterSSLResponseBody() {}

  explicit DescribeDBClusterSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SSLAutoRotate) {
      res["SSLAutoRotate"] = boost::any(*SSLAutoRotate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBClusterSSLResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterSSLResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBClusterSSLResponseBodyItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SSLAutoRotate") != m.end() && !m["SSLAutoRotate"].empty()) {
      SSLAutoRotate = make_shared<string>(boost::any_cast<string>(m["SSLAutoRotate"]));
    }
  }


  virtual ~DescribeDBClusterSSLResponseBody() = default;
};
class DescribeDBClusterSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterSSLResponseBody> body{};

  DescribeDBClusterSSLResponse() {}

  explicit DescribeDBClusterSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterSSLResponse() = default;
};
class DescribeDBClusterTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterTDERequest() {}

  explicit DescribeDBClusterTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterTDERequest() = default;
};
class DescribeDBClusterTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> encryptNewTables{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> TDEStatus{};

  DescribeDBClusterTDEResponseBody() {}

  explicit DescribeDBClusterTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (encryptNewTables) {
      res["EncryptNewTables"] = boost::any(*encryptNewTables);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EncryptNewTables") != m.end() && !m["EncryptNewTables"].empty()) {
      encryptNewTables = make_shared<string>(boost::any_cast<string>(m["EncryptNewTables"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~DescribeDBClusterTDEResponseBody() = default;
};
class DescribeDBClusterTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterTDEResponseBody> body{};

  DescribeDBClusterTDEResponse() {}

  explicit DescribeDBClusterTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterTDEResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterTDEResponse() = default;
};
class DescribeDBClusterVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterVersionRequest() {}

  explicit DescribeDBClusterVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClusterVersionRequest() = default;
};
class DescribeDBClusterVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBLatestVersion{};
  shared_ptr<string> DBMinorVersion{};
  shared_ptr<string> DBRevisionVersion{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> DBVersionStatus{};
  shared_ptr<string> isLatestVersion{};
  shared_ptr<string> proxyLatestVersion{};
  shared_ptr<string> proxyRevisionVersion{};
  shared_ptr<string> proxyVersionStatus{};
  shared_ptr<string> requestId{};

  DescribeDBClusterVersionResponseBody() {}

  explicit DescribeDBClusterVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBLatestVersion) {
      res["DBLatestVersion"] = boost::any(*DBLatestVersion);
    }
    if (DBMinorVersion) {
      res["DBMinorVersion"] = boost::any(*DBMinorVersion);
    }
    if (DBRevisionVersion) {
      res["DBRevisionVersion"] = boost::any(*DBRevisionVersion);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (DBVersionStatus) {
      res["DBVersionStatus"] = boost::any(*DBVersionStatus);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (proxyLatestVersion) {
      res["ProxyLatestVersion"] = boost::any(*proxyLatestVersion);
    }
    if (proxyRevisionVersion) {
      res["ProxyRevisionVersion"] = boost::any(*proxyRevisionVersion);
    }
    if (proxyVersionStatus) {
      res["ProxyVersionStatus"] = boost::any(*proxyVersionStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBLatestVersion") != m.end() && !m["DBLatestVersion"].empty()) {
      DBLatestVersion = make_shared<string>(boost::any_cast<string>(m["DBLatestVersion"]));
    }
    if (m.find("DBMinorVersion") != m.end() && !m["DBMinorVersion"].empty()) {
      DBMinorVersion = make_shared<string>(boost::any_cast<string>(m["DBMinorVersion"]));
    }
    if (m.find("DBRevisionVersion") != m.end() && !m["DBRevisionVersion"].empty()) {
      DBRevisionVersion = make_shared<string>(boost::any_cast<string>(m["DBRevisionVersion"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("DBVersionStatus") != m.end() && !m["DBVersionStatus"].empty()) {
      DBVersionStatus = make_shared<string>(boost::any_cast<string>(m["DBVersionStatus"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<string>(boost::any_cast<string>(m["IsLatestVersion"]));
    }
    if (m.find("ProxyLatestVersion") != m.end() && !m["ProxyLatestVersion"].empty()) {
      proxyLatestVersion = make_shared<string>(boost::any_cast<string>(m["ProxyLatestVersion"]));
    }
    if (m.find("ProxyRevisionVersion") != m.end() && !m["ProxyRevisionVersion"].empty()) {
      proxyRevisionVersion = make_shared<string>(boost::any_cast<string>(m["ProxyRevisionVersion"]));
    }
    if (m.find("ProxyVersionStatus") != m.end() && !m["ProxyVersionStatus"].empty()) {
      proxyVersionStatus = make_shared<string>(boost::any_cast<string>(m["ProxyVersionStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterVersionResponseBody() = default;
};
class DescribeDBClusterVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterVersionResponseBody> body{};

  DescribeDBClusterVersionResponse() {}

  explicit DescribeDBClusterVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterVersionResponse() = default;
};
class DescribeDBClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersRequestTag() {}

  explicit DescribeDBClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClustersRequestTag() = default;
};
class DescribeDBClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBNodeIds{};
  shared_ptr<string> DBType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DescribeDBClustersRequestTag>> tag{};

  DescribeDBClustersRequest() {}

  explicit DescribeDBClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = boost::any(*DBNodeIds);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      DBNodeIds = make_shared<string>(boost::any_cast<string>(m["DBNodeIds"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersRequest() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> DBNodeRole{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (DBNodeRole) {
      res["DBNodeRole"] = boost::any(*DBNodeRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("DBNodeRole") != m.end() && !m["DBNodeRole"].empty()) {
      DBNodeRole = make_shared<string>(boost::any_cast<string>(m["DBNodeRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterDBNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode>> DBNode{};

  DescribeDBClustersResponseBodyItemsDBClusterDBNodes() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNode) {
      vector<boost::any> temp1;
      for(auto item1:*DBNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNode") != m.end() && !m["DBNode"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNode"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNode = make_shared<vector<DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterDBNodes() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersResponseBodyItemsDBClusterTagsTag() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTagsTag() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>> tag{};

  DescribeDBClustersResponseBodyItemsDBClusterTags() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTags() = default;
};
class DescribeDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeNumber{};
  shared_ptr<DescribeDBClustersResponseBodyItemsDBClusterDBNodes> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<long> deletionLock{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> storageUsed{};
  shared_ptr<DescribeDBClustersResponseBodyItemsDBClusterTags> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBClustersResponseBodyItemsDBCluster() {}

  explicit DescribeDBClustersResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeNumber) {
      res["DBNodeNumber"] = boost::any(*DBNodeNumber);
    }
    if (DBNodes) {
      res["DBNodes"] = DBNodes ? boost::any(DBNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (deletionLock) {
      res["DeletionLock"] = boost::any(*deletionLock);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeNumber") != m.end() && !m["DBNodeNumber"].empty()) {
      DBNodeNumber = make_shared<long>(boost::any_cast<long>(m["DBNodeNumber"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBNodes"].type()) {
        DescribeDBClustersResponseBodyItemsDBClusterDBNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBNodes"]));
        DBNodes = make_shared<DescribeDBClustersResponseBodyItemsDBClusterDBNodes>(model1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("DeletionLock") != m.end() && !m["DeletionLock"].empty()) {
      deletionLock = make_shared<long>(boost::any_cast<long>(m["DeletionLock"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClustersResponseBodyItemsDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClustersResponseBodyItemsDBClusterTags>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBCluster() = default;
};
class DescribeDBClustersResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClustersResponseBodyItems() {}

  explicit DescribeDBClustersResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClustersResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItems() = default;
};
class DescribeDBClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClustersResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeDBClustersResponseBody() {}

  explicit DescribeDBClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClustersResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClustersResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDBClustersResponseBody() = default;
};
class DescribeDBClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClustersResponseBody> body{};

  DescribeDBClustersResponse() {}

  explicit DescribeDBClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersResponse() = default;
};
class DescribeDBClustersWithBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<long> isDeleted{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClustersWithBackupsRequest() {}

  explicit DescribeDBClustersWithBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<long>(boost::any_cast<long>(m["IsDeleted"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBClustersWithBackupsRequest() = default;
};
class DescribeDBClustersWithBackupsResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> deletedTime{};
  shared_ptr<long> deletionLock{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<long> isDeleted{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBClustersWithBackupsResponseBodyItemsDBCluster() {}

  explicit DescribeDBClustersWithBackupsResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (deletedTime) {
      res["DeletedTime"] = boost::any(*deletedTime);
    }
    if (deletionLock) {
      res["DeletionLock"] = boost::any(*deletionLock);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("DeletedTime") != m.end() && !m["DeletedTime"].empty()) {
      deletedTime = make_shared<string>(boost::any_cast<string>(m["DeletedTime"]));
    }
    if (m.find("DeletionLock") != m.end() && !m["DeletionLock"].empty()) {
      deletionLock = make_shared<long>(boost::any_cast<long>(m["DeletionLock"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<long>(boost::any_cast<long>(m["IsDeleted"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClustersWithBackupsResponseBodyItemsDBCluster() = default;
};
class DescribeDBClustersWithBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersWithBackupsResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClustersWithBackupsResponseBodyItems() {}

  explicit DescribeDBClustersWithBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClustersWithBackupsResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersWithBackupsResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClustersWithBackupsResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersWithBackupsResponseBodyItems() = default;
};
class DescribeDBClustersWithBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClustersWithBackupsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeDBClustersWithBackupsResponseBody() {}

  explicit DescribeDBClustersWithBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClustersWithBackupsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClustersWithBackupsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDBClustersWithBackupsResponseBody() = default;
};
class DescribeDBClustersWithBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClustersWithBackupsResponseBody> body{};

  DescribeDBClustersWithBackupsResponse() {}

  explicit DescribeDBClustersWithBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClustersWithBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClustersWithBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersWithBackupsResponse() = default;
};
class DescribeDBInitializeVariableRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBInitializeVariableRequest() {}

  explicit DescribeDBInitializeVariableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBInitializeVariableRequest() = default;
};
class DescribeDBInitializeVariableResponseBodyVariablesVariable : public Darabonba::Model {
public:
  shared_ptr<string> charset{};
  shared_ptr<string> collate{};
  shared_ptr<string> ctype{};

  DescribeDBInitializeVariableResponseBodyVariablesVariable() {}

  explicit DescribeDBInitializeVariableResponseBodyVariablesVariable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (charset) {
      res["Charset"] = boost::any(*charset);
    }
    if (collate) {
      res["Collate"] = boost::any(*collate);
    }
    if (ctype) {
      res["Ctype"] = boost::any(*ctype);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Charset") != m.end() && !m["Charset"].empty()) {
      charset = make_shared<string>(boost::any_cast<string>(m["Charset"]));
    }
    if (m.find("Collate") != m.end() && !m["Collate"].empty()) {
      collate = make_shared<string>(boost::any_cast<string>(m["Collate"]));
    }
    if (m.find("Ctype") != m.end() && !m["Ctype"].empty()) {
      ctype = make_shared<string>(boost::any_cast<string>(m["Ctype"]));
    }
  }


  virtual ~DescribeDBInitializeVariableResponseBodyVariablesVariable() = default;
};
class DescribeDBInitializeVariableResponseBodyVariables : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInitializeVariableResponseBodyVariablesVariable>> variable{};

  DescribeDBInitializeVariableResponseBodyVariables() {}

  explicit DescribeDBInitializeVariableResponseBodyVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (variable) {
      vector<boost::any> temp1;
      for(auto item1:*variable){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variable"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Variable") != m.end() && !m["Variable"].empty()) {
      if (typeid(vector<boost::any>) == m["Variable"].type()) {
        vector<DescribeDBInitializeVariableResponseBodyVariablesVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variable"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInitializeVariableResponseBodyVariablesVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variable = make_shared<vector<DescribeDBInitializeVariableResponseBodyVariablesVariable>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInitializeVariableResponseBodyVariables() = default;
};
class DescribeDBInitializeVariableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInitializeVariableResponseBodyVariables> variables{};

  DescribeDBInitializeVariableResponseBody() {}

  explicit DescribeDBInitializeVariableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (variables) {
      res["Variables"] = variables ? boost::any(variables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Variables"].type()) {
        DescribeDBInitializeVariableResponseBodyVariables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Variables"]));
        variables = make_shared<DescribeDBInitializeVariableResponseBodyVariables>(model1);
      }
    }
  }


  virtual ~DescribeDBInitializeVariableResponseBody() = default;
};
class DescribeDBInitializeVariableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInitializeVariableResponseBody> body{};

  DescribeDBInitializeVariableResponse() {}

  explicit DescribeDBInitializeVariableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInitializeVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInitializeVariableResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInitializeVariableResponse() = default;
};
class DescribeDBLinksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBLinkName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBLinksRequest() {}

  explicit DescribeDBLinksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBLinkName) {
      res["DBLinkName"] = boost::any(*DBLinkName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBLinkName") != m.end() && !m["DBLinkName"].empty()) {
      DBLinkName = make_shared<string>(boost::any_cast<string>(m["DBLinkName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBLinksRequest() = default;
};
class DescribeDBLinksResponseBodyDBLinkInfos : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBLinkName{};
  shared_ptr<string> sourceDBName{};
  shared_ptr<string> targetAccount{};
  shared_ptr<string> targetDBInstanceName{};
  shared_ptr<string> targetDBName{};

  DescribeDBLinksResponseBodyDBLinkInfos() {}

  explicit DescribeDBLinksResponseBodyDBLinkInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBLinkName) {
      res["DBLinkName"] = boost::any(*DBLinkName);
    }
    if (sourceDBName) {
      res["SourceDBName"] = boost::any(*sourceDBName);
    }
    if (targetAccount) {
      res["TargetAccount"] = boost::any(*targetAccount);
    }
    if (targetDBInstanceName) {
      res["TargetDBInstanceName"] = boost::any(*targetDBInstanceName);
    }
    if (targetDBName) {
      res["TargetDBName"] = boost::any(*targetDBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBLinkName") != m.end() && !m["DBLinkName"].empty()) {
      DBLinkName = make_shared<string>(boost::any_cast<string>(m["DBLinkName"]));
    }
    if (m.find("SourceDBName") != m.end() && !m["SourceDBName"].empty()) {
      sourceDBName = make_shared<string>(boost::any_cast<string>(m["SourceDBName"]));
    }
    if (m.find("TargetAccount") != m.end() && !m["TargetAccount"].empty()) {
      targetAccount = make_shared<string>(boost::any_cast<string>(m["TargetAccount"]));
    }
    if (m.find("TargetDBInstanceName") != m.end() && !m["TargetDBInstanceName"].empty()) {
      targetDBInstanceName = make_shared<string>(boost::any_cast<string>(m["TargetDBInstanceName"]));
    }
    if (m.find("TargetDBName") != m.end() && !m["TargetDBName"].empty()) {
      targetDBName = make_shared<string>(boost::any_cast<string>(m["TargetDBName"]));
    }
  }


  virtual ~DescribeDBLinksResponseBodyDBLinkInfos() = default;
};
class DescribeDBLinksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<vector<DescribeDBLinksResponseBodyDBLinkInfos>> DBLinkInfos{};
  shared_ptr<string> requestId{};

  DescribeDBLinksResponseBody() {}

  explicit DescribeDBLinksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBLinkInfos) {
      vector<boost::any> temp1;
      for(auto item1:*DBLinkInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBLinkInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBLinkInfos") != m.end() && !m["DBLinkInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DBLinkInfos"].type()) {
        vector<DescribeDBLinksResponseBodyDBLinkInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBLinkInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBLinksResponseBodyDBLinkInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBLinkInfos = make_shared<vector<DescribeDBLinksResponseBodyDBLinkInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBLinksResponseBody() = default;
};
class DescribeDBLinksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBLinksResponseBody> body{};

  DescribeDBLinksResponse() {}

  explicit DescribeDBLinksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBLinksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBLinksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBLinksResponse() = default;
};
class DescribeDBNodePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceRequest() {}

  explicit DescribeDBNodePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceRequest() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<string> value{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItemValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItemValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItemValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItemValue") != m.end() && !m["PerformanceItemValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItemValue"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItemValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItemValue = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
public:
  shared_ptr<string> measurement{};
  shared_ptr<string> metricName{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (measurement) {
      res["Measurement"] = boost::any(*measurement);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (points) {
      res["Points"] = points ? boost::any(points->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Measurement") != m.end() && !m["Measurement"].empty()) {
      measurement = make_shared<string>(boost::any_cast<string>(m["Measurement"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      if (typeid(map<string, boost::any>) == m["Points"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Points"]));
        points = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItem") != m.end() && !m["PerformanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItem"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItem = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBNodePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceResponseBody() {}

  explicit DescribeDBNodePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBody() = default;
};
class DescribeDBNodePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBNodePerformanceResponseBody> body{};

  DescribeDBNodePerformanceResponse() {}

  explicit DescribeDBNodePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBNodePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBNodePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponse() = default;
};
class DescribeDBProxyPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> startTime{};

  DescribeDBProxyPerformanceRequest() {}

  explicit DescribeDBProxyPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBProxyPerformanceRequest() = default;
};
class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<string> value{};

  DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() {}

  explicit DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default;
};
class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue{};

  DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() {}

  explicit DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItemValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItemValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItemValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItemValue") != m.end() && !m["PerformanceItemValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItemValue"].type()) {
        vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItemValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItemValue = make_shared<vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default;
};
class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> measurement{};
  shared_ptr<string> metricName{};
  shared_ptr<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points{};

  DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem() {}

  explicit DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (measurement) {
      res["Measurement"] = boost::any(*measurement);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (points) {
      res["Points"] = points ? boost::any(points->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("Measurement") != m.end() && !m["Measurement"].empty()) {
      measurement = make_shared<string>(boost::any_cast<string>(m["Measurement"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      if (typeid(map<string, boost::any>) == m["Points"].type()) {
        DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Points"]));
        points = make_shared<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItemPoints>(model1);
      }
    }
  }


  virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem() = default;
};
class DescribeDBProxyPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem{};

  DescribeDBProxyPerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBProxyPerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItem") != m.end() && !m["PerformanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItem"].type()) {
        vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItem = make_shared<vector<DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBProxyPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBProxyPerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBProxyPerformanceResponseBody() {}

  explicit DescribeDBProxyPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBProxyPerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBProxyPerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBProxyPerformanceResponseBody() = default;
};
class DescribeDBProxyPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBProxyPerformanceResponseBody> body{};

  DescribeDBProxyPerformanceResponse() {}

  explicit DescribeDBProxyPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBProxyPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBProxyPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBProxyPerformanceResponse() = default;
};
class DescribeDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDatabasesRequest() {}

  explicit DescribeDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDatabasesRequest() = default;
};
class DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> privilegeStatus{};

  DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount() {}

  explicit DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (privilegeStatus) {
      res["PrivilegeStatus"] = boost::any(*privilegeStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("PrivilegeStatus") != m.end() && !m["PrivilegeStatus"].empty()) {
      privilegeStatus = make_shared<string>(boost::any_cast<string>(m["PrivilegeStatus"]));
    }
  }


  virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount() = default;
};
class DescribeDatabasesResponseBodyDatabasesDatabaseAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount>> account{};

  DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() {}

  explicit DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() = default;
};
class DescribeDatabasesResponseBodyDatabasesDatabase : public Darabonba::Model {
public:
  shared_ptr<DescribeDatabasesResponseBodyDatabasesDatabaseAccounts> accounts{};
  shared_ptr<string> characterSetName{};
  shared_ptr<string> DBDescription{};
  shared_ptr<string> DBName{};
  shared_ptr<string> DBStatus{};
  shared_ptr<string> engine{};

  DescribeDatabasesResponseBodyDatabasesDatabase() {}

  explicit DescribeDatabasesResponseBodyDatabasesDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (characterSetName) {
      res["CharacterSetName"] = boost::any(*characterSetName);
    }
    if (DBDescription) {
      res["DBDescription"] = boost::any(*DBDescription);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (DBStatus) {
      res["DBStatus"] = boost::any(*DBStatus);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeDatabasesResponseBodyDatabasesDatabaseAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeDatabasesResponseBodyDatabasesDatabaseAccounts>(model1);
      }
    }
    if (m.find("CharacterSetName") != m.end() && !m["CharacterSetName"].empty()) {
      characterSetName = make_shared<string>(boost::any_cast<string>(m["CharacterSetName"]));
    }
    if (m.find("DBDescription") != m.end() && !m["DBDescription"].empty()) {
      DBDescription = make_shared<string>(boost::any_cast<string>(m["DBDescription"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DBStatus") != m.end() && !m["DBStatus"].empty()) {
      DBStatus = make_shared<string>(boost::any_cast<string>(m["DBStatus"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDatabasesResponseBodyDatabasesDatabase() = default;
};
class DescribeDatabasesResponseBodyDatabases : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDatabasesResponseBodyDatabasesDatabase>> database{};

  DescribeDatabasesResponseBodyDatabases() {}

  explicit DescribeDatabasesResponseBodyDatabases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      vector<boost::any> temp1;
      for(auto item1:*database){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Database"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(vector<boost::any>) == m["Database"].type()) {
        vector<DescribeDatabasesResponseBodyDatabasesDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Database"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDatabasesResponseBodyDatabasesDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        database = make_shared<vector<DescribeDatabasesResponseBodyDatabasesDatabase>>(expect1);
      }
    }
  }


  virtual ~DescribeDatabasesResponseBodyDatabases() = default;
};
class DescribeDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDatabasesResponseBodyDatabases> databases{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};

  DescribeDatabasesResponseBody() {}

  explicit DescribeDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databases) {
      res["Databases"] = databases ? boost::any(databases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Databases") != m.end() && !m["Databases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Databases"].type()) {
        DescribeDatabasesResponseBodyDatabases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Databases"]));
        databases = make_shared<DescribeDatabasesResponseBodyDatabases>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDatabasesResponseBody() = default;
};
class DescribeDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDatabasesResponseBody> body{};

  DescribeDatabasesResponse() {}

  explicit DescribeDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDatabasesResponse() = default;
};
class DescribeDetachedBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeDetachedBackupsRequest() {}

  explicit DescribeDetachedBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDetachedBackupsRequest() = default;
};
class DescribeDetachedBackupsResponseBodyItemsBackup : public Darabonba::Model {
public:
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupSetSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupsLevel{};
  shared_ptr<string> consistentTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> isAvail{};
  shared_ptr<string> storeStatus{};

  DescribeDetachedBackupsResponseBodyItemsBackup() {}

  explicit DescribeDetachedBackupsResponseBodyItemsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSetSize) {
      res["BackupSetSize"] = boost::any(*backupSetSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupsLevel) {
      res["BackupsLevel"] = boost::any(*backupsLevel);
    }
    if (consistentTime) {
      res["ConsistentTime"] = boost::any(*consistentTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (isAvail) {
      res["IsAvail"] = boost::any(*isAvail);
    }
    if (storeStatus) {
      res["StoreStatus"] = boost::any(*storeStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSetSize") != m.end() && !m["BackupSetSize"].empty()) {
      backupSetSize = make_shared<string>(boost::any_cast<string>(m["BackupSetSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupsLevel") != m.end() && !m["BackupsLevel"].empty()) {
      backupsLevel = make_shared<string>(boost::any_cast<string>(m["BackupsLevel"]));
    }
    if (m.find("ConsistentTime") != m.end() && !m["ConsistentTime"].empty()) {
      consistentTime = make_shared<string>(boost::any_cast<string>(m["ConsistentTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("IsAvail") != m.end() && !m["IsAvail"].empty()) {
      isAvail = make_shared<string>(boost::any_cast<string>(m["IsAvail"]));
    }
    if (m.find("StoreStatus") != m.end() && !m["StoreStatus"].empty()) {
      storeStatus = make_shared<string>(boost::any_cast<string>(m["StoreStatus"]));
    }
  }


  virtual ~DescribeDetachedBackupsResponseBodyItemsBackup() = default;
};
class DescribeDetachedBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDetachedBackupsResponseBodyItemsBackup>> backup{};

  DescribeDetachedBackupsResponseBodyItems() {}

  explicit DescribeDetachedBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeDetachedBackupsResponseBodyItemsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDetachedBackupsResponseBodyItemsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeDetachedBackupsResponseBodyItemsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeDetachedBackupsResponseBodyItems() = default;
};
class DescribeDetachedBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDetachedBackupsResponseBodyItems> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalRecordCount{};

  DescribeDetachedBackupsResponseBody() {}

  explicit DescribeDetachedBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDetachedBackupsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDetachedBackupsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<string>(boost::any_cast<string>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<string>(boost::any_cast<string>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDetachedBackupsResponseBody() = default;
};
class DescribeDetachedBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDetachedBackupsResponseBody> body{};

  DescribeDetachedBackupsResponse() {}

  explicit DescribeDetachedBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDetachedBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDetachedBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDetachedBackupsResponse() = default;
};
class DescribeGlobalDatabaseNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> GDNId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeGlobalDatabaseNetworkRequest() {}

  explicit DescribeGlobalDatabaseNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkRequest() = default;
};
class DescribeGlobalDatabaseNetworkResponseBodyConnections : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};

  DescribeGlobalDatabaseNetworkResponseBodyConnections() {}

  explicit DescribeGlobalDatabaseNetworkResponseBodyConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkResponseBodyConnections() = default;
};
class DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> DBNodeRole{};
  shared_ptr<string> DBNodeStatus{};
  shared_ptr<long> failoverPriority{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<string> zoneId{};

  DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes() {}

  explicit DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (DBNodeRole) {
      res["DBNodeRole"] = boost::any(*DBNodeRole);
    }
    if (DBNodeStatus) {
      res["DBNodeStatus"] = boost::any(*DBNodeStatus);
    }
    if (failoverPriority) {
      res["FailoverPriority"] = boost::any(*failoverPriority);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("DBNodeRole") != m.end() && !m["DBNodeRole"].empty()) {
      DBNodeRole = make_shared<string>(boost::any_cast<string>(m["DBNodeRole"]));
    }
    if (m.find("DBNodeStatus") != m.end() && !m["DBNodeStatus"].empty()) {
      DBNodeStatus = make_shared<string>(boost::any_cast<string>(m["DBNodeStatus"]));
    }
    if (m.find("FailoverPriority") != m.end() && !m["FailoverPriority"].empty()) {
      failoverPriority = make_shared<long>(boost::any_cast<long>(m["FailoverPriority"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes() = default;
};
class DescribeGlobalDatabaseNetworkResponseBodyDBClusters : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicaLag{};
  shared_ptr<string> role{};
  shared_ptr<string> storageUsed{};

  DescribeGlobalDatabaseNetworkResponseBodyDBClusters() {}

  explicit DescribeGlobalDatabaseNetworkResponseBodyDBClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaLag) {
      res["ReplicaLag"] = boost::any(*replicaLag);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaLag") != m.end() && !m["ReplicaLag"].empty()) {
      replicaLag = make_shared<string>(boost::any_cast<string>(m["ReplicaLag"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkResponseBodyDBClusters() = default;
};
class DescribeGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBodyConnections>> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters>> DBClusters{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> GDNDescription{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> GDNStatus{};
  shared_ptr<string> requestId{};

  DescribeGlobalDatabaseNetworkResponseBody() {}

  explicit DescribeGlobalDatabaseNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connections"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusters) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusters"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (GDNDescription) {
      res["GDNDescription"] = boost::any(*GDNDescription);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (GDNStatus) {
      res["GDNStatus"] = boost::any(*GDNStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      if (typeid(vector<boost::any>) == m["Connections"].type()) {
        vector<DescribeGlobalDatabaseNetworkResponseBodyConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDatabaseNetworkResponseBodyConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<DescribeGlobalDatabaseNetworkResponseBodyConnections>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusters") != m.end() && !m["DBClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusters"].type()) {
        vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDatabaseNetworkResponseBodyDBClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusters = make_shared<vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("GDNDescription") != m.end() && !m["GDNDescription"].empty()) {
      GDNDescription = make_shared<string>(boost::any_cast<string>(m["GDNDescription"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("GDNStatus") != m.end() && !m["GDNStatus"].empty()) {
      GDNStatus = make_shared<string>(boost::any_cast<string>(m["GDNStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkResponseBody() = default;
};
class DescribeGlobalDatabaseNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGlobalDatabaseNetworkResponseBody> body{};

  DescribeGlobalDatabaseNetworkResponse() {}

  explicit DescribeGlobalDatabaseNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGlobalDatabaseNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGlobalDatabaseNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGlobalDatabaseNetworkResponse() = default;
};
class DescribeGlobalDatabaseNetworksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeGlobalDatabaseNetworksRequest() {}

  explicit DescribeGlobalDatabaseNetworksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworksRequest() = default;
};
class DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> role{};

  DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters() {}

  explicit DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters() = default;
};
class DescribeGlobalDatabaseNetworksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters>> DBClusters{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> GDNDescription{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> GDNStatus{};

  DescribeGlobalDatabaseNetworksResponseBodyItems() {}

  explicit DescribeGlobalDatabaseNetworksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusters) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusters"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (GDNDescription) {
      res["GDNDescription"] = boost::any(*GDNDescription);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (GDNStatus) {
      res["GDNStatus"] = boost::any(*GDNStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusters") != m.end() && !m["DBClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusters"].type()) {
        vector<DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusters = make_shared<vector<DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("GDNDescription") != m.end() && !m["GDNDescription"].empty()) {
      GDNDescription = make_shared<string>(boost::any_cast<string>(m["GDNDescription"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("GDNStatus") != m.end() && !m["GDNStatus"].empty()) {
      GDNStatus = make_shared<string>(boost::any_cast<string>(m["GDNStatus"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworksResponseBodyItems() = default;
};
class DescribeGlobalDatabaseNetworksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGlobalDatabaseNetworksResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeGlobalDatabaseNetworksResponseBody() {}

  explicit DescribeGlobalDatabaseNetworksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeGlobalDatabaseNetworksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDatabaseNetworksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeGlobalDatabaseNetworksResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeGlobalDatabaseNetworksResponseBody() = default;
};
class DescribeGlobalDatabaseNetworksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGlobalDatabaseNetworksResponseBody> body{};

  DescribeGlobalDatabaseNetworksResponse() {}

  explicit DescribeGlobalDatabaseNetworksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGlobalDatabaseNetworksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGlobalDatabaseNetworksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGlobalDatabaseNetworksResponse() = default;
};
class DescribeLogBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeLogBackupPolicyRequest() {}

  explicit DescribeLogBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeLogBackupPolicyRequest() = default;
};
class DescribeLogBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> enableBackupLog{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<string> requestId{};

  DescribeLogBackupPolicyResponseBody() {}

  explicit DescribeLogBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<long>(boost::any_cast<long>(m["EnableBackupLog"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLogBackupPolicyResponseBody() = default;
};
class DescribeLogBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogBackupPolicyResponseBody> body{};

  DescribeLogBackupPolicyResponse() {}

  explicit DescribeLogBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeLogBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogBackupPolicyResponse() = default;
};
class DescribeMaskingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ruleNameList{};

  DescribeMaskingRulesRequest() {}

  explicit DescribeMaskingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ruleNameList) {
      res["RuleNameList"] = boost::any(*ruleNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RuleNameList") != m.end() && !m["RuleNameList"].empty()) {
      ruleNameList = make_shared<string>(boost::any_cast<string>(m["RuleNameList"]));
    }
  }


  virtual ~DescribeMaskingRulesRequest() = default;
};
class DescribeMaskingRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleList{};

  DescribeMaskingRulesResponseBodyData() {}

  explicit DescribeMaskingRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleList) {
      res["RuleList"] = boost::any(*ruleList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMaskingRulesResponseBodyData() = default;
};
class DescribeMaskingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMaskingRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMaskingRulesResponseBody() {}

  explicit DescribeMaskingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeMaskingRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeMaskingRulesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeMaskingRulesResponseBody() = default;
};
class DescribeMaskingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMaskingRulesResponseBody> body{};

  DescribeMaskingRulesResponse() {}

  explicit DescribeMaskingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMaskingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMaskingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMaskingRulesResponse() = default;
};
class DescribeMetaListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> getDbName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityToken{};

  DescribeMetaListRequest() {}

  explicit DescribeMetaListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (getDbName) {
      res["GetDbName"] = boost::any(*getDbName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GetDbName") != m.end() && !m["GetDbName"].empty()) {
      getDbName = make_shared<string>(boost::any_cast<string>(m["GetDbName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeMetaListRequest() = default;
};
class DescribeMetaListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<vector<string>> tables{};

  DescribeMetaListResponseBodyItems() {}

  explicit DescribeMetaListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMetaListResponseBodyItems() = default;
};
class DescribeMetaListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMetaListResponseBodyItems>> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalPageCount{};
  shared_ptr<string> totalRecordCount{};

  DescribeMetaListResponseBody() {}

  explicit DescribeMetaListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalPageCount) {
      res["TotalPageCount"] = boost::any(*totalPageCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeMetaListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetaListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeMetaListResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalPageCount") != m.end() && !m["TotalPageCount"].empty()) {
      totalPageCount = make_shared<string>(boost::any_cast<string>(m["TotalPageCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<string>(boost::any_cast<string>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeMetaListResponseBody() = default;
};
class DescribeMetaListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMetaListResponseBody> body{};

  DescribeMetaListResponse() {}

  explicit DescribeMetaListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMetaListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMetaListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMetaListResponse() = default;
};
class DescribeParameterGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeParameterGroupRequest() {}

  explicit DescribeParameterGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeParameterGroupRequest() = default;
};
class DescribeParameterGroupResponseBodyParameterGroupParameterDetail : public Darabonba::Model {
public:
  shared_ptr<string> paramName{};
  shared_ptr<string> paramValue{};

  DescribeParameterGroupResponseBodyParameterGroupParameterDetail() {}

  explicit DescribeParameterGroupResponseBodyParameterGroupParameterDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~DescribeParameterGroupResponseBodyParameterGroupParameterDetail() = default;
};
class DescribeParameterGroupResponseBodyParameterGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> forceRestart{};
  shared_ptr<long> parameterCounts{};
  shared_ptr<vector<DescribeParameterGroupResponseBodyParameterGroupParameterDetail>> parameterDetail{};
  shared_ptr<string> parameterGroupDesc{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> parameterGroupName{};
  shared_ptr<string> parameterGroupType{};

  DescribeParameterGroupResponseBodyParameterGroup() {}

  explicit DescribeParameterGroupResponseBodyParameterGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (parameterCounts) {
      res["ParameterCounts"] = boost::any(*parameterCounts);
    }
    if (parameterDetail) {
      vector<boost::any> temp1;
      for(auto item1:*parameterDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterDetail"] = boost::any(temp1);
    }
    if (parameterGroupDesc) {
      res["ParameterGroupDesc"] = boost::any(*parameterGroupDesc);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (parameterGroupName) {
      res["ParameterGroupName"] = boost::any(*parameterGroupName);
    }
    if (parameterGroupType) {
      res["ParameterGroupType"] = boost::any(*parameterGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<string>(boost::any_cast<string>(m["ForceRestart"]));
    }
    if (m.find("ParameterCounts") != m.end() && !m["ParameterCounts"].empty()) {
      parameterCounts = make_shared<long>(boost::any_cast<long>(m["ParameterCounts"]));
    }
    if (m.find("ParameterDetail") != m.end() && !m["ParameterDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterDetail"].type()) {
        vector<DescribeParameterGroupResponseBodyParameterGroupParameterDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterGroupResponseBodyParameterGroupParameterDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterDetail = make_shared<vector<DescribeParameterGroupResponseBodyParameterGroupParameterDetail>>(expect1);
      }
    }
    if (m.find("ParameterGroupDesc") != m.end() && !m["ParameterGroupDesc"].empty()) {
      parameterGroupDesc = make_shared<string>(boost::any_cast<string>(m["ParameterGroupDesc"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("ParameterGroupName") != m.end() && !m["ParameterGroupName"].empty()) {
      parameterGroupName = make_shared<string>(boost::any_cast<string>(m["ParameterGroupName"]));
    }
    if (m.find("ParameterGroupType") != m.end() && !m["ParameterGroupType"].empty()) {
      parameterGroupType = make_shared<string>(boost::any_cast<string>(m["ParameterGroupType"]));
    }
  }


  virtual ~DescribeParameterGroupResponseBodyParameterGroup() = default;
};
class DescribeParameterGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterGroupResponseBodyParameterGroup>> parameterGroup{};
  shared_ptr<string> requestId{};

  DescribeParameterGroupResponseBody() {}

  explicit DescribeParameterGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterGroup) {
      vector<boost::any> temp1;
      for(auto item1:*parameterGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterGroup"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterGroup") != m.end() && !m["ParameterGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterGroup"].type()) {
        vector<DescribeParameterGroupResponseBodyParameterGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterGroupResponseBodyParameterGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterGroup = make_shared<vector<DescribeParameterGroupResponseBodyParameterGroup>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterGroupResponseBody() = default;
};
class DescribeParameterGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParameterGroupResponseBody> body{};

  DescribeParameterGroupResponse() {}

  explicit DescribeParameterGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterGroupResponse() = default;
};
class DescribeParameterGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeParameterGroupsRequest() {}

  explicit DescribeParameterGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeParameterGroupsRequest() = default;
};
class DescribeParameterGroupsResponseBodyParameterGroups : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> forceRestart{};
  shared_ptr<long> parameterCounts{};
  shared_ptr<string> parameterGroupDesc{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> parameterGroupName{};
  shared_ptr<string> parameterGroupType{};

  DescribeParameterGroupsResponseBodyParameterGroups() {}

  explicit DescribeParameterGroupsResponseBodyParameterGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (parameterCounts) {
      res["ParameterCounts"] = boost::any(*parameterCounts);
    }
    if (parameterGroupDesc) {
      res["ParameterGroupDesc"] = boost::any(*parameterGroupDesc);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (parameterGroupName) {
      res["ParameterGroupName"] = boost::any(*parameterGroupName);
    }
    if (parameterGroupType) {
      res["ParameterGroupType"] = boost::any(*parameterGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<string>(boost::any_cast<string>(m["ForceRestart"]));
    }
    if (m.find("ParameterCounts") != m.end() && !m["ParameterCounts"].empty()) {
      parameterCounts = make_shared<long>(boost::any_cast<long>(m["ParameterCounts"]));
    }
    if (m.find("ParameterGroupDesc") != m.end() && !m["ParameterGroupDesc"].empty()) {
      parameterGroupDesc = make_shared<string>(boost::any_cast<string>(m["ParameterGroupDesc"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("ParameterGroupName") != m.end() && !m["ParameterGroupName"].empty()) {
      parameterGroupName = make_shared<string>(boost::any_cast<string>(m["ParameterGroupName"]));
    }
    if (m.find("ParameterGroupType") != m.end() && !m["ParameterGroupType"].empty()) {
      parameterGroupType = make_shared<string>(boost::any_cast<string>(m["ParameterGroupType"]));
    }
  }


  virtual ~DescribeParameterGroupsResponseBodyParameterGroups() = default;
};
class DescribeParameterGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterGroupsResponseBodyParameterGroups>> parameterGroups{};
  shared_ptr<string> requestId{};

  DescribeParameterGroupsResponseBody() {}

  explicit DescribeParameterGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterGroups) {
      vector<boost::any> temp1;
      for(auto item1:*parameterGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterGroups") != m.end() && !m["ParameterGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterGroups"].type()) {
        vector<DescribeParameterGroupsResponseBodyParameterGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterGroupsResponseBodyParameterGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterGroups = make_shared<vector<DescribeParameterGroupsResponseBodyParameterGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterGroupsResponseBody() = default;
};
class DescribeParameterGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParameterGroupsResponseBody> body{};

  DescribeParameterGroupsResponse() {}

  explicit DescribeParameterGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterGroupsResponse() = default;
};
class DescribeParameterTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeParameterTemplatesRequest() {}

  explicit DescribeParameterTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeParameterTemplatesRequest() = default;
};
class DescribeParameterTemplatesResponseBodyParametersTemplateRecord : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<string> forceModify{};
  shared_ptr<string> forceRestart{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParameterTemplatesResponseBodyParametersTemplateRecord() {}

  explicit DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (forceModify) {
      res["ForceModify"] = boost::any(*forceModify);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ForceModify") != m.end() && !m["ForceModify"].empty()) {
      forceModify = make_shared<string>(boost::any_cast<string>(m["ForceModify"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<string>(boost::any_cast<string>(m["ForceRestart"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default;
};
class DescribeParameterTemplatesResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>> templateRecord{};

  DescribeParameterTemplatesResponseBodyParameters() {}

  explicit DescribeParameterTemplatesResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateRecord) {
      vector<boost::any> temp1;
      for(auto item1:*templateRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateRecord") != m.end() && !m["TemplateRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateRecord"].type()) {
        vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterTemplatesResponseBodyParametersTemplateRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateRecord = make_shared<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyParameters() = default;
};
class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> parameterCount{};
  shared_ptr<DescribeParameterTemplatesResponseBodyParameters> parameters{};
  shared_ptr<string> requestId{};

  DescribeParameterTemplatesResponseBody() {}

  explicit DescribeParameterTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (parameterCount) {
      res["ParameterCount"] = boost::any(*parameterCount);
    }
    if (parameters) {
      res["Parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ParameterCount") != m.end() && !m["ParameterCount"].empty()) {
      parameterCount = make_shared<string>(boost::any_cast<string>(m["ParameterCount"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameters"].type()) {
        DescribeParameterTemplatesResponseBodyParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameters"]));
        parameters = make_shared<DescribeParameterTemplatesResponseBodyParameters>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBody() = default;
};
class DescribeParameterTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParameterTemplatesResponseBody> body{};

  DescribeParameterTemplatesResponse() {}

  explicit DescribeParameterTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponse() = default;
};
class DescribePendingMaintenanceActionRequest : public Darabonba::Model {
public:
  shared_ptr<long> isHistory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> taskType{};

  DescribePendingMaintenanceActionRequest() {}

  explicit DescribePendingMaintenanceActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHistory) {
      res["IsHistory"] = boost::any(*isHistory);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHistory") != m.end() && !m["IsHistory"].empty()) {
      isHistory = make_shared<long>(boost::any_cast<long>(m["IsHistory"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribePendingMaintenanceActionRequest() = default;
};
class DescribePendingMaintenanceActionResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> deadline{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> prepareInterval{};
  shared_ptr<string> region{};
  shared_ptr<string> resultInfo{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> taskType{};

  DescribePendingMaintenanceActionResponseBodyItems() {}

  explicit DescribePendingMaintenanceActionResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (deadline) {
      res["Deadline"] = boost::any(*deadline);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (prepareInterval) {
      res["PrepareInterval"] = boost::any(*prepareInterval);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resultInfo) {
      res["ResultInfo"] = boost::any(*resultInfo);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Deadline") != m.end() && !m["Deadline"].empty()) {
      deadline = make_shared<string>(boost::any_cast<string>(m["Deadline"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PrepareInterval") != m.end() && !m["PrepareInterval"].empty()) {
      prepareInterval = make_shared<string>(boost::any_cast<string>(m["PrepareInterval"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      resultInfo = make_shared<string>(boost::any_cast<string>(m["ResultInfo"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribePendingMaintenanceActionResponseBodyItems() = default;
};
class DescribePendingMaintenanceActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePendingMaintenanceActionResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribePendingMaintenanceActionResponseBody() {}

  explicit DescribePendingMaintenanceActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribePendingMaintenanceActionResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePendingMaintenanceActionResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribePendingMaintenanceActionResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribePendingMaintenanceActionResponseBody() = default;
};
class DescribePendingMaintenanceActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePendingMaintenanceActionResponseBody> body{};

  DescribePendingMaintenanceActionResponse() {}

  explicit DescribePendingMaintenanceActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePendingMaintenanceActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePendingMaintenanceActionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePendingMaintenanceActionResponse() = default;
};
class DescribePendingMaintenanceActionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> isHistory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribePendingMaintenanceActionsRequest() {}

  explicit DescribePendingMaintenanceActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHistory) {
      res["IsHistory"] = boost::any(*isHistory);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHistory") != m.end() && !m["IsHistory"].empty()) {
      isHistory = make_shared<long>(boost::any_cast<long>(m["IsHistory"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribePendingMaintenanceActionsRequest() = default;
};
class DescribePendingMaintenanceActionsResponseBodyTypeList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> taskType{};

  DescribePendingMaintenanceActionsResponseBodyTypeList() {}

  explicit DescribePendingMaintenanceActionsResponseBodyTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribePendingMaintenanceActionsResponseBodyTypeList() = default;
};
class DescribePendingMaintenanceActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribePendingMaintenanceActionsResponseBodyTypeList>> typeList{};

  DescribePendingMaintenanceActionsResponseBody() {}

  explicit DescribePendingMaintenanceActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (typeList) {
      vector<boost::any> temp1;
      for(auto item1:*typeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TypeList") != m.end() && !m["TypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeList"].type()) {
        vector<DescribePendingMaintenanceActionsResponseBodyTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePendingMaintenanceActionsResponseBodyTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeList = make_shared<vector<DescribePendingMaintenanceActionsResponseBodyTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribePendingMaintenanceActionsResponseBody() = default;
};
class DescribePendingMaintenanceActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePendingMaintenanceActionsResponseBody> body{};

  DescribePendingMaintenanceActionsResponse() {}

  explicit DescribePendingMaintenanceActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePendingMaintenanceActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePendingMaintenanceActionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePendingMaintenanceActionsResponse() = default;
};
class DescribePolarSQLCollectorPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePolarSQLCollectorPolicyRequest() {}

  explicit DescribePolarSQLCollectorPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePolarSQLCollectorPolicyRequest() = default;
};
class DescribePolarSQLCollectorPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> SQLCollectorStatus{};

  DescribePolarSQLCollectorPolicyResponseBody() {}

  explicit DescribePolarSQLCollectorPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SQLCollectorStatus) {
      res["SQLCollectorStatus"] = boost::any(*SQLCollectorStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SQLCollectorStatus") != m.end() && !m["SQLCollectorStatus"].empty()) {
      SQLCollectorStatus = make_shared<string>(boost::any_cast<string>(m["SQLCollectorStatus"]));
    }
  }


  virtual ~DescribePolarSQLCollectorPolicyResponseBody() = default;
};
class DescribePolarSQLCollectorPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePolarSQLCollectorPolicyResponseBody> body{};

  DescribePolarSQLCollectorPolicyResponse() {}

  explicit DescribePolarSQLCollectorPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePolarSQLCollectorPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolarSQLCollectorPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolarSQLCollectorPolicyResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeScheduleTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};

  DescribeScheduleTasksRequest() {}

  explicit DescribeScheduleTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
  }


  virtual ~DescribeScheduleTasksRequest() = default;
};
class DescribeScheduleTasksResponseBodyDataTimerInfos : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> dbClusterDescription{};
  shared_ptr<string> dbClusterStatus{};
  shared_ptr<string> orderId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> plannedTime{};
  shared_ptr<string> region{};
  shared_ptr<string> status{};
  shared_ptr<bool> taskCancel{};
  shared_ptr<string> taskId{};

  DescribeScheduleTasksResponseBodyDataTimerInfos() {}

  explicit DescribeScheduleTasksResponseBodyDataTimerInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (dbClusterDescription) {
      res["DbClusterDescription"] = boost::any(*dbClusterDescription);
    }
    if (dbClusterStatus) {
      res["DbClusterStatus"] = boost::any(*dbClusterStatus);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (plannedTime) {
      res["PlannedTime"] = boost::any(*plannedTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskCancel) {
      res["TaskCancel"] = boost::any(*taskCancel);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DbClusterDescription") != m.end() && !m["DbClusterDescription"].empty()) {
      dbClusterDescription = make_shared<string>(boost::any_cast<string>(m["DbClusterDescription"]));
    }
    if (m.find("DbClusterStatus") != m.end() && !m["DbClusterStatus"].empty()) {
      dbClusterStatus = make_shared<string>(boost::any_cast<string>(m["DbClusterStatus"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("PlannedTime") != m.end() && !m["PlannedTime"].empty()) {
      plannedTime = make_shared<string>(boost::any_cast<string>(m["PlannedTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskCancel") != m.end() && !m["TaskCancel"].empty()) {
      taskCancel = make_shared<bool>(boost::any_cast<bool>(m["TaskCancel"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeScheduleTasksResponseBodyDataTimerInfos() = default;
};
class DescribeScheduleTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeScheduleTasksResponseBodyDataTimerInfos>> timerInfos{};
  shared_ptr<long> totalRecordCount{};

  DescribeScheduleTasksResponseBodyData() {}

  explicit DescribeScheduleTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (timerInfos) {
      vector<boost::any> temp1;
      for(auto item1:*timerInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerInfos"] = boost::any(temp1);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TimerInfos") != m.end() && !m["TimerInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerInfos"].type()) {
        vector<DescribeScheduleTasksResponseBodyDataTimerInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduleTasksResponseBodyDataTimerInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerInfos = make_shared<vector<DescribeScheduleTasksResponseBodyDataTimerInfos>>(expect1);
      }
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeScheduleTasksResponseBodyData() = default;
};
class DescribeScheduleTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeScheduleTasksResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeScheduleTasksResponseBody() {}

  explicit DescribeScheduleTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeScheduleTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeScheduleTasksResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeScheduleTasksResponseBody() = default;
};
class DescribeScheduleTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScheduleTasksResponseBody> body{};

  DescribeScheduleTasksResponse() {}

  explicit DescribeScheduleTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScheduleTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduleTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduleTasksResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> SQLHASH{};
  shared_ptr<string> startTime{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (SQLHASH) {
      res["SQLHASH"] = boost::any(*SQLHASH);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SQLHASH") != m.end() && !m["SQLHASH"].empty()) {
      SQLHASH = make_shared<string>(boost::any_cast<string>(m["SQLHASH"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord : public Darabonba::Model {
public:
  shared_ptr<string> DBName{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> executionStartTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<long> lockTimes{};
  shared_ptr<long> parseRowCounts{};
  shared_ptr<long> queryTimeMS{};
  shared_ptr<long> queryTimes{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> SQLText{};

  DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() {}

  explicit DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (executionStartTime) {
      res["ExecutionStartTime"] = boost::any(*executionStartTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (lockTimes) {
      res["LockTimes"] = boost::any(*lockTimes);
    }
    if (parseRowCounts) {
      res["ParseRowCounts"] = boost::any(*parseRowCounts);
    }
    if (queryTimeMS) {
      res["QueryTimeMS"] = boost::any(*queryTimeMS);
    }
    if (queryTimes) {
      res["QueryTimes"] = boost::any(*queryTimes);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("ExecutionStartTime") != m.end() && !m["ExecutionStartTime"].empty()) {
      executionStartTime = make_shared<string>(boost::any_cast<string>(m["ExecutionStartTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("LockTimes") != m.end() && !m["LockTimes"].empty()) {
      lockTimes = make_shared<long>(boost::any_cast<long>(m["LockTimes"]));
    }
    if (m.find("ParseRowCounts") != m.end() && !m["ParseRowCounts"].empty()) {
      parseRowCounts = make_shared<long>(boost::any_cast<long>(m["ParseRowCounts"]));
    }
    if (m.find("QueryTimeMS") != m.end() && !m["QueryTimeMS"].empty()) {
      queryTimeMS = make_shared<long>(boost::any_cast<long>(m["QueryTimeMS"]));
    }
    if (m.find("QueryTimes") != m.end() && !m["QueryTimes"].empty()) {
      queryTimes = make_shared<long>(boost::any_cast<long>(m["QueryTimes"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>> SQLSlowRecord{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQLSlowRecord) {
      vector<boost::any> temp1;
      for(auto item1:*SQLSlowRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SQLSlowRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQLSlowRecord") != m.end() && !m["SQLSlowRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["SQLSlowRecord"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SQLSlowRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SQLSlowRecord = make_shared<vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> engine{};
  shared_ptr<DescribeSlowLogRecordsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSlowLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSlowLogRecordsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBody() = default;
};
class DescribeSlowLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
};
class DescribeStoragePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeStoragePlanRequest() {}

  explicit DescribeStoragePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeStoragePlanRequest() = default;
};
class DescribeStoragePlanResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> endTimes{};
  shared_ptr<string> initCapaCityViewUnit{};
  shared_ptr<string> initCapacityViewValue{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> periodCapaCityViewUnit{};
  shared_ptr<string> periodCapacityViewValue{};
  shared_ptr<string> periodTime{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> purchaseTimes{};
  shared_ptr<string> startTimes{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<string> templateName{};

  DescribeStoragePlanResponseBodyItems() {}

  explicit DescribeStoragePlanResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (endTimes) {
      res["EndTimes"] = boost::any(*endTimes);
    }
    if (initCapaCityViewUnit) {
      res["InitCapaCityViewUnit"] = boost::any(*initCapaCityViewUnit);
    }
    if (initCapacityViewValue) {
      res["InitCapacityViewValue"] = boost::any(*initCapacityViewValue);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (periodCapaCityViewUnit) {
      res["PeriodCapaCityViewUnit"] = boost::any(*periodCapaCityViewUnit);
    }
    if (periodCapacityViewValue) {
      res["PeriodCapacityViewValue"] = boost::any(*periodCapacityViewValue);
    }
    if (periodTime) {
      res["PeriodTime"] = boost::any(*periodTime);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (purchaseTimes) {
      res["PurchaseTimes"] = boost::any(*purchaseTimes);
    }
    if (startTimes) {
      res["StartTimes"] = boost::any(*startTimes);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("EndTimes") != m.end() && !m["EndTimes"].empty()) {
      endTimes = make_shared<string>(boost::any_cast<string>(m["EndTimes"]));
    }
    if (m.find("InitCapaCityViewUnit") != m.end() && !m["InitCapaCityViewUnit"].empty()) {
      initCapaCityViewUnit = make_shared<string>(boost::any_cast<string>(m["InitCapaCityViewUnit"]));
    }
    if (m.find("InitCapacityViewValue") != m.end() && !m["InitCapacityViewValue"].empty()) {
      initCapacityViewValue = make_shared<string>(boost::any_cast<string>(m["InitCapacityViewValue"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PeriodCapaCityViewUnit") != m.end() && !m["PeriodCapaCityViewUnit"].empty()) {
      periodCapaCityViewUnit = make_shared<string>(boost::any_cast<string>(m["PeriodCapaCityViewUnit"]));
    }
    if (m.find("PeriodCapacityViewValue") != m.end() && !m["PeriodCapacityViewValue"].empty()) {
      periodCapacityViewValue = make_shared<string>(boost::any_cast<string>(m["PeriodCapacityViewValue"]));
    }
    if (m.find("PeriodTime") != m.end() && !m["PeriodTime"].empty()) {
      periodTime = make_shared<string>(boost::any_cast<string>(m["PeriodTime"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("PurchaseTimes") != m.end() && !m["PurchaseTimes"].empty()) {
      purchaseTimes = make_shared<string>(boost::any_cast<string>(m["PurchaseTimes"]));
    }
    if (m.find("StartTimes") != m.end() && !m["StartTimes"].empty()) {
      startTimes = make_shared<string>(boost::any_cast<string>(m["StartTimes"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~DescribeStoragePlanResponseBodyItems() = default;
};
class DescribeStoragePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStoragePlanResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeStoragePlanResponseBody() {}

  explicit DescribeStoragePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeStoragePlanResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoragePlanResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeStoragePlanResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeStoragePlanResponseBody() = default;
};
class DescribeStoragePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStoragePlanResponseBody> body{};

  DescribeStoragePlanResponse() {}

  explicit DescribeStoragePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeStoragePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStoragePlanResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStoragePlanResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyTasksTask : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> currentStepName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> expectedFinishTime{};
  shared_ptr<string> finishTime{};
  shared_ptr<long> progress{};
  shared_ptr<string> progressInfo{};
  shared_ptr<long> remain{};
  shared_ptr<string> stepProgressInfo{};
  shared_ptr<string> stepsInfo{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskErrorCode{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};

  DescribeTasksResponseBodyTasksTask() {}

  explicit DescribeTasksResponseBodyTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentStepName) {
      res["CurrentStepName"] = boost::any(*currentStepName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (expectedFinishTime) {
      res["ExpectedFinishTime"] = boost::any(*expectedFinishTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (progressInfo) {
      res["ProgressInfo"] = boost::any(*progressInfo);
    }
    if (remain) {
      res["Remain"] = boost::any(*remain);
    }
    if (stepProgressInfo) {
      res["StepProgressInfo"] = boost::any(*stepProgressInfo);
    }
    if (stepsInfo) {
      res["StepsInfo"] = boost::any(*stepsInfo);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskErrorCode) {
      res["TaskErrorCode"] = boost::any(*taskErrorCode);
    }
    if (taskErrorMessage) {
      res["TaskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("CurrentStepName") != m.end() && !m["CurrentStepName"].empty()) {
      currentStepName = make_shared<string>(boost::any_cast<string>(m["CurrentStepName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("ExpectedFinishTime") != m.end() && !m["ExpectedFinishTime"].empty()) {
      expectedFinishTime = make_shared<string>(boost::any_cast<string>(m["ExpectedFinishTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ProgressInfo") != m.end() && !m["ProgressInfo"].empty()) {
      progressInfo = make_shared<string>(boost::any_cast<string>(m["ProgressInfo"]));
    }
    if (m.find("Remain") != m.end() && !m["Remain"].empty()) {
      remain = make_shared<long>(boost::any_cast<long>(m["Remain"]));
    }
    if (m.find("StepProgressInfo") != m.end() && !m["StepProgressInfo"].empty()) {
      stepProgressInfo = make_shared<string>(boost::any_cast<string>(m["StepProgressInfo"]));
    }
    if (m.find("StepsInfo") != m.end() && !m["StepsInfo"].empty()) {
      stepsInfo = make_shared<string>(boost::any_cast<string>(m["StepsInfo"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskErrorCode") != m.end() && !m["TaskErrorCode"].empty()) {
      taskErrorCode = make_shared<string>(boost::any_cast<string>(m["TaskErrorCode"]));
    }
    if (m.find("TaskErrorMessage") != m.end() && !m["TaskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskErrorMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeTasksResponseBodyTasksTask() = default;
};
class DescribeTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyTasksTask>> task{};

  DescribeTasksResponseBodyTasks() {}

  explicit DescribeTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeTasksResponseBodyTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeTasksResponseBodyTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeTasksResponseBodyTasks() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeTasksResponseBodyTasks> tasks{};
  shared_ptr<long> totalRecordCount{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeTasksResponseBodyTasks>(model1);
      }
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class FailoverDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> targetDBNodeId{};

  FailoverDBClusterRequest() {}

  explicit FailoverDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (targetDBNodeId) {
      res["TargetDBNodeId"] = boost::any(*targetDBNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TargetDBNodeId") != m.end() && !m["TargetDBNodeId"].empty()) {
      targetDBNodeId = make_shared<string>(boost::any_cast<string>(m["TargetDBNodeId"]));
    }
  }


  virtual ~FailoverDBClusterRequest() = default;
};
class FailoverDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FailoverDBClusterResponseBody() {}

  explicit FailoverDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FailoverDBClusterResponseBody() = default;
};
class FailoverDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FailoverDBClusterResponseBody> body{};

  FailoverDBClusterResponse() {}

  explicit FailoverDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FailoverDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FailoverDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~FailoverDBClusterResponse() = default;
};
class GrantAccountPrivilegeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GrantAccountPrivilegeRequest() {}

  explicit GrantAccountPrivilegeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GrantAccountPrivilegeRequest() = default;
};
class GrantAccountPrivilegeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantAccountPrivilegeResponseBody() {}

  explicit GrantAccountPrivilegeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GrantAccountPrivilegeResponseBody() = default;
};
class GrantAccountPrivilegeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantAccountPrivilegeResponseBody> body{};

  GrantAccountPrivilegeResponse() {}

  explicit GrantAccountPrivilegeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantAccountPrivilegeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantAccountPrivilegeResponseBody>(model1);
      }
    }
  }


  virtual ~GrantAccountPrivilegeResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTagResourcesForRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListTagResourcesForRegionRequest() {}

  explicit ListTagResourcesForRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListTagResourcesForRegionRequest() = default;
};
class ListTagResourcesForRegionResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesForRegionResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesForRegionResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesForRegionResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesForRegionResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesForRegionResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesForRegionResponseBodyTagResources() {}

  explicit ListTagResourcesForRegionResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesForRegionResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesForRegionResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesForRegionResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesForRegionResponseBodyTagResources() = default;
};
class ListTagResourcesForRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesForRegionResponseBodyTagResources> tagResources{};

  ListTagResourcesForRegionResponseBody() {}

  explicit ListTagResourcesForRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesForRegionResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesForRegionResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesForRegionResponseBody() = default;
};
class ListTagResourcesForRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesForRegionResponseBody> body{};

  ListTagResourcesForRegionResponse() {}

  explicit ListTagResourcesForRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesForRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesForRegionResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesForRegionResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> newAccountPassword{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyAccountPasswordRequest() {}

  explicit ModifyAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (newAccountPassword) {
      res["NewAccountPassword"] = boost::any(*newAccountPassword);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("NewAccountPassword") != m.end() && !m["NewAccountPassword"].empty()) {
      newAccountPassword = make_shared<string>(boost::any_cast<string>(m["NewAccountPassword"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyAccountPasswordRequest() = default;
};
class ModifyAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountPasswordResponseBody() {}

  explicit ModifyAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAccountPasswordResponseBody() = default;
};
class ModifyAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountPasswordResponseBody> body{};

  ModifyAccountPasswordResponse() {}

  explicit ModifyAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountPasswordResponse() = default;
};
class ModifyAutoRenewAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> duration{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renewalStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyAutoRenewAttributeRequest() {}

  explicit ModifyAutoRenewAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyAutoRenewAttributeRequest() = default;
};
class ModifyAutoRenewAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAutoRenewAttributeResponseBody() {}

  explicit ModifyAutoRenewAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAutoRenewAttributeResponseBody() = default;
};
class ModifyAutoRenewAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAutoRenewAttributeResponseBody> body{};

  ModifyAutoRenewAttributeResponse() {}

  explicit ModifyAutoRenewAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAutoRenewAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAutoRenewAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAutoRenewAttributeResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupFrequency{};
  shared_ptr<string> backupRetentionPolicyOnClusterDeletion{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> dataLevel1BackupRetentionPeriod{};
  shared_ptr<string> dataLevel2BackupRetentionPeriod{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupFrequency) {
      res["BackupFrequency"] = boost::any(*backupFrequency);
    }
    if (backupRetentionPolicyOnClusterDeletion) {
      res["BackupRetentionPolicyOnClusterDeletion"] = boost::any(*backupRetentionPolicyOnClusterDeletion);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (dataLevel1BackupRetentionPeriod) {
      res["DataLevel1BackupRetentionPeriod"] = boost::any(*dataLevel1BackupRetentionPeriod);
    }
    if (dataLevel2BackupRetentionPeriod) {
      res["DataLevel2BackupRetentionPeriod"] = boost::any(*dataLevel2BackupRetentionPeriod);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupFrequency") != m.end() && !m["BackupFrequency"].empty()) {
      backupFrequency = make_shared<string>(boost::any_cast<string>(m["BackupFrequency"]));
    }
    if (m.find("BackupRetentionPolicyOnClusterDeletion") != m.end() && !m["BackupRetentionPolicyOnClusterDeletion"].empty()) {
      backupRetentionPolicyOnClusterDeletion = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPolicyOnClusterDeletion"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DataLevel1BackupRetentionPeriod") != m.end() && !m["DataLevel1BackupRetentionPeriod"].empty()) {
      dataLevel1BackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["DataLevel1BackupRetentionPeriod"]));
    }
    if (m.find("DataLevel2BackupRetentionPeriod") != m.end() && !m["DataLevel2BackupRetentionPeriod"].empty()) {
      dataLevel2BackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["DataLevel2BackupRetentionPeriod"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyDBClusterAccessWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupIds{};
  shared_ptr<string> securityIps{};
  shared_ptr<string> whiteListType{};

  ModifyDBClusterAccessWhitelistRequest() {}

  explicit ModifyDBClusterAccessWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    if (whiteListType) {
      res["WhiteListType"] = boost::any(*whiteListType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["SecurityGroupIds"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
    if (m.find("WhiteListType") != m.end() && !m["WhiteListType"].empty()) {
      whiteListType = make_shared<string>(boost::any_cast<string>(m["WhiteListType"]));
    }
  }


  virtual ~ModifyDBClusterAccessWhitelistRequest() = default;
};
class ModifyDBClusterAccessWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterAccessWhitelistResponseBody() {}

  explicit ModifyDBClusterAccessWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterAccessWhitelistResponseBody() = default;
};
class ModifyDBClusterAccessWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterAccessWhitelistResponseBody> body{};

  ModifyDBClusterAccessWhitelistResponse() {}

  explicit ModifyDBClusterAccessWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterAccessWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterAccessWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterAccessWhitelistResponse() = default;
};
class ModifyDBClusterAuditLogCollectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> collectorStatus{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterAuditLogCollectorRequest() {}

  explicit ModifyDBClusterAuditLogCollectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectorStatus) {
      res["CollectorStatus"] = boost::any(*collectorStatus);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectorStatus") != m.end() && !m["CollectorStatus"].empty()) {
      collectorStatus = make_shared<string>(boost::any_cast<string>(m["CollectorStatus"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterAuditLogCollectorRequest() = default;
};
class ModifyDBClusterAuditLogCollectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterAuditLogCollectorResponseBody() {}

  explicit ModifyDBClusterAuditLogCollectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterAuditLogCollectorResponseBody() = default;
};
class ModifyDBClusterAuditLogCollectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterAuditLogCollectorResponseBody> body{};

  ModifyDBClusterAuditLogCollectorResponse() {}

  explicit ModifyDBClusterAuditLogCollectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterAuditLogCollectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterAuditLogCollectorResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterAuditLogCollectorResponse() = default;
};
class ModifyDBClusterDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterDescriptionRequest() {}

  explicit ModifyDBClusterDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterDescriptionRequest() = default;
};
class ModifyDBClusterDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterDescriptionResponseBody() {}

  explicit ModifyDBClusterDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterDescriptionResponseBody() = default;
};
class ModifyDBClusterDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterDescriptionResponseBody> body{};

  ModifyDBClusterDescriptionResponse() {}

  explicit ModifyDBClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterDescriptionResponse() = default;
};
class ModifyDBClusterEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoAddNewNodes{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointDescription{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> endpointConfig{};
  shared_ptr<string> nodes{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> readWriteMode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterEndpointRequest() {}

  explicit ModifyDBClusterEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAddNewNodes) {
      res["AutoAddNewNodes"] = boost::any(*autoAddNewNodes);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointDescription) {
      res["DBEndpointDescription"] = boost::any(*DBEndpointDescription);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (endpointConfig) {
      res["EndpointConfig"] = boost::any(*endpointConfig);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readWriteMode) {
      res["ReadWriteMode"] = boost::any(*readWriteMode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAddNewNodes") != m.end() && !m["AutoAddNewNodes"].empty()) {
      autoAddNewNodes = make_shared<string>(boost::any_cast<string>(m["AutoAddNewNodes"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointDescription") != m.end() && !m["DBEndpointDescription"].empty()) {
      DBEndpointDescription = make_shared<string>(boost::any_cast<string>(m["DBEndpointDescription"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("EndpointConfig") != m.end() && !m["EndpointConfig"].empty()) {
      endpointConfig = make_shared<string>(boost::any_cast<string>(m["EndpointConfig"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadWriteMode") != m.end() && !m["ReadWriteMode"].empty()) {
      readWriteMode = make_shared<string>(boost::any_cast<string>(m["ReadWriteMode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterEndpointRequest() = default;
};
class ModifyDBClusterEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterEndpointResponseBody() {}

  explicit ModifyDBClusterEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterEndpointResponseBody() = default;
};
class ModifyDBClusterEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterEndpointResponseBody> body{};

  ModifyDBClusterEndpointResponse() {}

  explicit ModifyDBClusterEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterEndpointResponse() = default;
};
class ModifyDBClusterMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterMaintainTimeRequest() {}

  explicit ModifyDBClusterMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterMaintainTimeRequest() = default;
};
class ModifyDBClusterMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMaintainTimeResponseBody() {}

  explicit ModifyDBClusterMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponseBody() = default;
};
class ModifyDBClusterMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterMaintainTimeResponseBody> body{};

  ModifyDBClusterMaintainTimeResponse() {}

  explicit ModifyDBClusterMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponse() = default;
};
class ModifyDBClusterMigrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> newMasterInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> sourceRDSDBInstanceId{};
  shared_ptr<string> swapConnectionString{};

  ModifyDBClusterMigrationRequest() {}

  explicit ModifyDBClusterMigrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (newMasterInstanceId) {
      res["NewMasterInstanceId"] = boost::any(*newMasterInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sourceRDSDBInstanceId) {
      res["SourceRDSDBInstanceId"] = boost::any(*sourceRDSDBInstanceId);
    }
    if (swapConnectionString) {
      res["SwapConnectionString"] = boost::any(*swapConnectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("NewMasterInstanceId") != m.end() && !m["NewMasterInstanceId"].empty()) {
      newMasterInstanceId = make_shared<string>(boost::any_cast<string>(m["NewMasterInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SourceRDSDBInstanceId") != m.end() && !m["SourceRDSDBInstanceId"].empty()) {
      sourceRDSDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceRDSDBInstanceId"]));
    }
    if (m.find("SwapConnectionString") != m.end() && !m["SwapConnectionString"].empty()) {
      swapConnectionString = make_shared<string>(boost::any_cast<string>(m["SwapConnectionString"]));
    }
  }


  virtual ~ModifyDBClusterMigrationRequest() = default;
};
class ModifyDBClusterMigrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMigrationResponseBody() {}

  explicit ModifyDBClusterMigrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterMigrationResponseBody() = default;
};
class ModifyDBClusterMigrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterMigrationResponseBody> body{};

  ModifyDBClusterMigrationResponse() {}

  explicit ModifyDBClusterMigrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterMigrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMigrationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMigrationResponse() = default;
};
class ModifyDBClusterMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> period{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterMonitorRequest() {}

  explicit ModifyDBClusterMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterMonitorRequest() = default;
};
class ModifyDBClusterMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMonitorResponseBody() {}

  explicit ModifyDBClusterMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterMonitorResponseBody() = default;
};
class ModifyDBClusterMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterMonitorResponseBody> body{};

  ModifyDBClusterMonitorResponse() {}

  explicit ModifyDBClusterMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMonitorResponse() = default;
};
class ModifyDBClusterParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterParametersRequest() {}

  explicit ModifyDBClusterParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterParametersRequest() = default;
};
class ModifyDBClusterParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterParametersResponseBody() {}

  explicit ModifyDBClusterParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterParametersResponseBody() = default;
};
class ModifyDBClusterParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterParametersResponseBody> body{};

  ModifyDBClusterParametersResponse() {}

  explicit ModifyDBClusterParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterParametersResponse() = default;
};
class ModifyDBClusterPrimaryZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> fromTimeService{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ModifyDBClusterPrimaryZoneRequest() {}

  explicit ModifyDBClusterPrimaryZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (fromTimeService) {
      res["FromTimeService"] = boost::any(*fromTimeService);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FromTimeService") != m.end() && !m["FromTimeService"].empty()) {
      fromTimeService = make_shared<bool>(boost::any_cast<bool>(m["FromTimeService"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ModifyDBClusterPrimaryZoneRequest() = default;
};
class ModifyDBClusterPrimaryZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterPrimaryZoneResponseBody() {}

  explicit ModifyDBClusterPrimaryZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterPrimaryZoneResponseBody() = default;
};
class ModifyDBClusterPrimaryZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterPrimaryZoneResponseBody> body{};

  ModifyDBClusterPrimaryZoneResponse() {}

  explicit ModifyDBClusterPrimaryZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterPrimaryZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterPrimaryZoneResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterPrimaryZoneResponse() = default;
};
class ModifyDBClusterSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> netType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> SSLAutoRotate{};
  shared_ptr<string> SSLEnabled{};

  ModifyDBClusterSSLRequest() {}

  explicit ModifyDBClusterSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (SSLAutoRotate) {
      res["SSLAutoRotate"] = boost::any(*SSLAutoRotate);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SSLAutoRotate") != m.end() && !m["SSLAutoRotate"].empty()) {
      SSLAutoRotate = make_shared<string>(boost::any_cast<string>(m["SSLAutoRotate"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<string>(boost::any_cast<string>(m["SSLEnabled"]));
    }
  }


  virtual ~ModifyDBClusterSSLRequest() = default;
};
class ModifyDBClusterSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterSSLResponseBody() {}

  explicit ModifyDBClusterSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterSSLResponseBody() = default;
};
class ModifyDBClusterSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterSSLResponseBody> body{};

  ModifyDBClusterSSLResponse() {}

  explicit ModifyDBClusterSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterSSLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterSSLResponse() = default;
};
class ModifyDBClusterTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> encryptNewTables{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> TDEStatus{};

  ModifyDBClusterTDERequest() {}

  explicit ModifyDBClusterTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (encryptNewTables) {
      res["EncryptNewTables"] = boost::any(*encryptNewTables);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EncryptNewTables") != m.end() && !m["EncryptNewTables"].empty()) {
      encryptNewTables = make_shared<string>(boost::any_cast<string>(m["EncryptNewTables"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~ModifyDBClusterTDERequest() = default;
};
class ModifyDBClusterTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterTDEResponseBody() {}

  explicit ModifyDBClusterTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterTDEResponseBody() = default;
};
class ModifyDBClusterTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterTDEResponseBody> body{};

  ModifyDBClusterTDEResponse() {}

  explicit ModifyDBClusterTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterTDEResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterTDEResponse() = default;
};
class ModifyDBDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBDescription{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBDescriptionRequest() {}

  explicit ModifyDBDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBDescription) {
      res["DBDescription"] = boost::any(*DBDescription);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBDescription") != m.end() && !m["DBDescription"].empty()) {
      DBDescription = make_shared<string>(boost::any_cast<string>(m["DBDescription"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBDescriptionRequest() = default;
};
class ModifyDBDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBDescriptionResponseBody() {}

  explicit ModifyDBDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBDescriptionResponseBody() = default;
};
class ModifyDBDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBDescriptionResponseBody> body{};

  ModifyDBDescriptionResponse() {}

  explicit ModifyDBDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBDescriptionResponse() = default;
};
class ModifyDBEndpointAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBEndpointId{};
  shared_ptr<string> netType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> port{};
  shared_ptr<string> privateZoneAddressPrefix{};
  shared_ptr<string> privateZoneName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBEndpointAddressRequest() {}

  explicit ModifyDBEndpointAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBEndpointId) {
      res["DBEndpointId"] = boost::any(*DBEndpointId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (privateZoneAddressPrefix) {
      res["PrivateZoneAddressPrefix"] = boost::any(*privateZoneAddressPrefix);
    }
    if (privateZoneName) {
      res["PrivateZoneName"] = boost::any(*privateZoneName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBEndpointId") != m.end() && !m["DBEndpointId"].empty()) {
      DBEndpointId = make_shared<string>(boost::any_cast<string>(m["DBEndpointId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("PrivateZoneAddressPrefix") != m.end() && !m["PrivateZoneAddressPrefix"].empty()) {
      privateZoneAddressPrefix = make_shared<string>(boost::any_cast<string>(m["PrivateZoneAddressPrefix"]));
    }
    if (m.find("PrivateZoneName") != m.end() && !m["PrivateZoneName"].empty()) {
      privateZoneName = make_shared<string>(boost::any_cast<string>(m["PrivateZoneName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBEndpointAddressRequest() = default;
};
class ModifyDBEndpointAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBEndpointAddressResponseBody() {}

  explicit ModifyDBEndpointAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBEndpointAddressResponseBody() = default;
};
class ModifyDBEndpointAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBEndpointAddressResponseBody> body{};

  ModifyDBEndpointAddressResponse() {}

  explicit ModifyDBEndpointAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBEndpointAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBEndpointAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBEndpointAddressResponse() = default;
};
class ModifyDBNodeClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeTargetClass{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBNodeClassRequest() {}

  explicit ModifyDBNodeClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeTargetClass) {
      res["DBNodeTargetClass"] = boost::any(*DBNodeTargetClass);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeTargetClass") != m.end() && !m["DBNodeTargetClass"].empty()) {
      DBNodeTargetClass = make_shared<string>(boost::any_cast<string>(m["DBNodeTargetClass"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBNodeClassRequest() = default;
};
class ModifyDBNodeClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBNodeClassResponseBody() {}

  explicit ModifyDBNodeClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBNodeClassResponseBody() = default;
};
class ModifyDBNodeClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBNodeClassResponseBody> body{};

  ModifyDBNodeClassResponse() {}

  explicit ModifyDBNodeClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBNodeClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBNodeClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBNodeClassResponse() = default;
};
class ModifyDBNodeHotReplicaModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> hotReplicaMode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBNodeHotReplicaModeRequest() {}

  explicit ModifyDBNodeHotReplicaModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (hotReplicaMode) {
      res["HotReplicaMode"] = boost::any(*hotReplicaMode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("HotReplicaMode") != m.end() && !m["HotReplicaMode"].empty()) {
      hotReplicaMode = make_shared<string>(boost::any_cast<string>(m["HotReplicaMode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBNodeHotReplicaModeRequest() = default;
};
class ModifyDBNodeHotReplicaModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBNodeHotReplicaModeResponseBody() {}

  explicit ModifyDBNodeHotReplicaModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBNodeHotReplicaModeResponseBody() = default;
};
class ModifyDBNodeHotReplicaModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBNodeHotReplicaModeResponseBody> body{};

  ModifyDBNodeHotReplicaModeResponse() {}

  explicit ModifyDBNodeHotReplicaModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBNodeHotReplicaModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBNodeHotReplicaModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBNodeHotReplicaModeResponse() = default;
};
class ModifyGlobalDatabaseNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> GDNDescription{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyGlobalDatabaseNetworkRequest() {}

  explicit ModifyGlobalDatabaseNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GDNDescription) {
      res["GDNDescription"] = boost::any(*GDNDescription);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GDNDescription") != m.end() && !m["GDNDescription"].empty()) {
      GDNDescription = make_shared<string>(boost::any_cast<string>(m["GDNDescription"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyGlobalDatabaseNetworkRequest() = default;
};
class ModifyGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyGlobalDatabaseNetworkResponseBody() {}

  explicit ModifyGlobalDatabaseNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyGlobalDatabaseNetworkResponseBody() = default;
};
class ModifyGlobalDatabaseNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyGlobalDatabaseNetworkResponseBody> body{};

  ModifyGlobalDatabaseNetworkResponse() {}

  explicit ModifyGlobalDatabaseNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyGlobalDatabaseNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGlobalDatabaseNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGlobalDatabaseNetworkResponse() = default;
};
class ModifyLogBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> logBackupRetentionPeriod{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyLogBackupPolicyRequest() {}

  explicit ModifyLogBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyLogBackupPolicyRequest() = default;
};
class ModifyLogBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLogBackupPolicyResponseBody() {}

  explicit ModifyLogBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLogBackupPolicyResponseBody() = default;
};
class ModifyLogBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLogBackupPolicyResponseBody> body{};

  ModifyLogBackupPolicyResponse() {}

  explicit ModifyLogBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyLogBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLogBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLogBackupPolicyResponse() = default;
};
class ModifyMaskingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> enable{};
  shared_ptr<string> ruleConfig{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleNameList{};

  ModifyMaskingRulesRequest() {}

  explicit ModifyMaskingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (ruleConfig) {
      res["RuleConfig"] = boost::any(*ruleConfig);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleNameList) {
      res["RuleNameList"] = boost::any(*ruleNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<string>(boost::any_cast<string>(m["Enable"]));
    }
    if (m.find("RuleConfig") != m.end() && !m["RuleConfig"].empty()) {
      ruleConfig = make_shared<string>(boost::any_cast<string>(m["RuleConfig"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleNameList") != m.end() && !m["RuleNameList"].empty()) {
      ruleNameList = make_shared<string>(boost::any_cast<string>(m["RuleNameList"]));
    }
  }


  virtual ~ModifyMaskingRulesRequest() = default;
};
class ModifyMaskingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyMaskingRulesResponseBody() {}

  explicit ModifyMaskingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyMaskingRulesResponseBody() = default;
};
class ModifyMaskingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyMaskingRulesResponseBody> body{};

  ModifyMaskingRulesResponse() {}

  explicit ModifyMaskingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyMaskingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMaskingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMaskingRulesResponse() = default;
};
class ModifyPendingMaintenanceActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> switchTime{};

  ModifyPendingMaintenanceActionRequest() {}

  explicit ModifyPendingMaintenanceActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~ModifyPendingMaintenanceActionRequest() = default;
};
class ModifyPendingMaintenanceActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> requestId{};

  ModifyPendingMaintenanceActionResponseBody() {}

  explicit ModifyPendingMaintenanceActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyPendingMaintenanceActionResponseBody() = default;
};
class ModifyPendingMaintenanceActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyPendingMaintenanceActionResponseBody> body{};

  ModifyPendingMaintenanceActionResponse() {}

  explicit ModifyPendingMaintenanceActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPendingMaintenanceActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPendingMaintenanceActionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPendingMaintenanceActionResponse() = default;
};
class RemoveDBClusterFromGDNRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RemoveDBClusterFromGDNRequest() {}

  explicit RemoveDBClusterFromGDNRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RemoveDBClusterFromGDNRequest() = default;
};
class RemoveDBClusterFromGDNResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveDBClusterFromGDNResponseBody() {}

  explicit RemoveDBClusterFromGDNResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveDBClusterFromGDNResponseBody() = default;
};
class RemoveDBClusterFromGDNResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveDBClusterFromGDNResponseBody> body{};

  RemoveDBClusterFromGDNResponse() {}

  explicit RemoveDBClusterFromGDNResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveDBClusterFromGDNResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDBClusterFromGDNResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDBClusterFromGDNResponse() = default;
};
class ResetAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ResetAccountRequest() {}

  explicit ResetAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ResetAccountRequest() = default;
};
class ResetAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountResponseBody() {}

  explicit ResetAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAccountResponseBody() = default;
};
class ResetAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetAccountResponseBody> body{};

  ResetAccountResponse() {}

  explicit ResetAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountResponse() = default;
};
class RestartDBNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RestartDBNodeRequest() {}

  explicit RestartDBNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RestartDBNodeRequest() = default;
};
class RestartDBNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartDBNodeResponseBody() {}

  explicit RestartDBNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestartDBNodeResponseBody() = default;
};
class RestartDBNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartDBNodeResponseBody> body{};

  RestartDBNodeResponse() {}

  explicit RestartDBNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartDBNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBNodeResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBNodeResponse() = default;
};
class RestoreTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> tableMeta{};

  RestoreTableRequest() {}

  explicit RestoreTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tableMeta) {
      res["TableMeta"] = boost::any(*tableMeta);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TableMeta") != m.end() && !m["TableMeta"].empty()) {
      tableMeta = make_shared<string>(boost::any_cast<string>(m["TableMeta"]));
    }
  }


  virtual ~RestoreTableRequest() = default;
};
class RestoreTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestoreTableResponseBody() {}

  explicit RestoreTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestoreTableResponseBody() = default;
};
class RestoreTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestoreTableResponseBody> body{};

  RestoreTableResponse() {}

  explicit RestoreTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestoreTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreTableResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreTableResponse() = default;
};
class RevokeAccountPrivilegeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RevokeAccountPrivilegeRequest() {}

  explicit RevokeAccountPrivilegeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RevokeAccountPrivilegeRequest() = default;
};
class RevokeAccountPrivilegeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeAccountPrivilegeResponseBody() {}

  explicit RevokeAccountPrivilegeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RevokeAccountPrivilegeResponseBody() = default;
};
class RevokeAccountPrivilegeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeAccountPrivilegeResponseBody> body{};

  RevokeAccountPrivilegeResponse() {}

  explicit RevokeAccountPrivilegeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokeAccountPrivilegeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeAccountPrivilegeResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeAccountPrivilegeResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TempModifyDBNodeRequestDBNode : public Darabonba::Model {
public:
  shared_ptr<string> targetClass{};
  shared_ptr<string> zoneId{};

  TempModifyDBNodeRequestDBNode() {}

  explicit TempModifyDBNodeRequestDBNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetClass) {
      res["TargetClass"] = boost::any(*targetClass);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetClass") != m.end() && !m["TargetClass"].empty()) {
      targetClass = make_shared<string>(boost::any_cast<string>(m["TargetClass"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~TempModifyDBNodeRequestDBNode() = default;
};
class TempModifyDBNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<TempModifyDBNodeRequestDBNode>> DBNode{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};

  TempModifyDBNodeRequest() {}

  explicit TempModifyDBNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNode) {
      vector<boost::any> temp1;
      for(auto item1:*DBNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNode"] = boost::any(temp1);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNode") != m.end() && !m["DBNode"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNode"].type()) {
        vector<TempModifyDBNodeRequestDBNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TempModifyDBNodeRequestDBNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNode = make_shared<vector<TempModifyDBNodeRequestDBNode>>(expect1);
      }
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
  }


  virtual ~TempModifyDBNodeRequest() = default;
};
class TempModifyDBNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<string>> DBNodeIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  TempModifyDBNodeResponseBody() {}

  explicit TempModifyDBNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = boost::any(*DBNodeIds);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBNodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBNodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBNodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TempModifyDBNodeResponseBody() = default;
};
class TempModifyDBNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TempModifyDBNodeResponseBody> body{};

  TempModifyDBNodeResponse() {}

  explicit TempModifyDBNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TempModifyDBNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TempModifyDBNodeResponseBody>(model1);
      }
    }
  }


  virtual ~TempModifyDBNodeResponse() = default;
};
class TransformDBClusterPayTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> usedTime{};

  TransformDBClusterPayTypeRequest() {}

  explicit TransformDBClusterPayTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
  }


  virtual ~TransformDBClusterPayTypeRequest() = default;
};
class TransformDBClusterPayTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  TransformDBClusterPayTypeResponseBody() {}

  explicit TransformDBClusterPayTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TransformDBClusterPayTypeResponseBody() = default;
};
class TransformDBClusterPayTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransformDBClusterPayTypeResponseBody> body{};

  TransformDBClusterPayTypeResponse() {}

  explicit TransformDBClusterPayTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransformDBClusterPayTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransformDBClusterPayTypeResponseBody>(model1);
      }
    }
  }


  virtual ~TransformDBClusterPayTypeResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpgradeDBClusterMinorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> fromTimeService{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpgradeDBClusterMinorVersionRequest() {}

  explicit UpgradeDBClusterMinorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (fromTimeService) {
      res["FromTimeService"] = boost::any(*fromTimeService);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FromTimeService") != m.end() && !m["FromTimeService"].empty()) {
      fromTimeService = make_shared<bool>(boost::any_cast<bool>(m["FromTimeService"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpgradeDBClusterMinorVersionRequest() = default;
};
class UpgradeDBClusterMinorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeDBClusterMinorVersionResponseBody() {}

  explicit UpgradeDBClusterMinorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeDBClusterMinorVersionResponseBody() = default;
};
class UpgradeDBClusterMinorVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeDBClusterMinorVersionResponseBody> body{};

  UpgradeDBClusterMinorVersionResponse() {}

  explicit UpgradeDBClusterMinorVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBClusterMinorVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBClusterMinorVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBClusterMinorVersionResponse() = default;
};
class UpgradeDBClusterVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> fromTimeService{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plannedEndTime{};
  shared_ptr<string> plannedStartTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> upgradeType{};

  UpgradeDBClusterVersionRequest() {}

  explicit UpgradeDBClusterVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (fromTimeService) {
      res["FromTimeService"] = boost::any(*fromTimeService);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plannedEndTime) {
      res["PlannedEndTime"] = boost::any(*plannedEndTime);
    }
    if (plannedStartTime) {
      res["PlannedStartTime"] = boost::any(*plannedStartTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("FromTimeService") != m.end() && !m["FromTimeService"].empty()) {
      fromTimeService = make_shared<bool>(boost::any_cast<bool>(m["FromTimeService"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlannedEndTime") != m.end() && !m["PlannedEndTime"].empty()) {
      plannedEndTime = make_shared<string>(boost::any_cast<string>(m["PlannedEndTime"]));
    }
    if (m.find("PlannedStartTime") != m.end() && !m["PlannedStartTime"].empty()) {
      plannedStartTime = make_shared<string>(boost::any_cast<string>(m["PlannedStartTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<string>(boost::any_cast<string>(m["UpgradeType"]));
    }
  }


  virtual ~UpgradeDBClusterVersionRequest() = default;
};
class UpgradeDBClusterVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeDBClusterVersionResponseBody() {}

  explicit UpgradeDBClusterVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeDBClusterVersionResponseBody() = default;
};
class UpgradeDBClusterVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeDBClusterVersionResponseBody> body{};

  UpgradeDBClusterVersionResponse() {}

  explicit UpgradeDBClusterVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBClusterVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBClusterVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBClusterVersionResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  CancelScheduleTasksResponse cancelScheduleTasksWithOptions(shared_ptr<CancelScheduleTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelScheduleTasksResponse cancelScheduleTasks(shared_ptr<CancelScheduleTasksRequest> request);
  CheckAccountNameResponse checkAccountNameWithOptions(shared_ptr<CheckAccountNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccountNameResponse checkAccountName(shared_ptr<CheckAccountNameRequest> request);
  CheckDBNameResponse checkDBNameWithOptions(shared_ptr<CheckDBNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDBNameResponse checkDBName(shared_ptr<CheckDBNameRequest> request);
  CloseDBClusterMigrationResponse closeDBClusterMigrationWithOptions(shared_ptr<CloseDBClusterMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseDBClusterMigrationResponse closeDBClusterMigration(shared_ptr<CloseDBClusterMigrationRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateBackupResponse createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupResponse createBackup(shared_ptr<CreateBackupRequest> request);
  CreateDBClusterResponse createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBClusterResponse createDBCluster(shared_ptr<CreateDBClusterRequest> request);
  CreateDBClusterEndpointResponse createDBClusterEndpointWithOptions(shared_ptr<CreateDBClusterEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBClusterEndpointResponse createDBClusterEndpoint(shared_ptr<CreateDBClusterEndpointRequest> request);
  CreateDBEndpointAddressResponse createDBEndpointAddressWithOptions(shared_ptr<CreateDBEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBEndpointAddressResponse createDBEndpointAddress(shared_ptr<CreateDBEndpointAddressRequest> request);
  CreateDBLinkResponse createDBLinkWithOptions(shared_ptr<CreateDBLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBLinkResponse createDBLink(shared_ptr<CreateDBLinkRequest> request);
  CreateDBNodesResponse createDBNodesWithOptions(shared_ptr<CreateDBNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBNodesResponse createDBNodes(shared_ptr<CreateDBNodesRequest> request);
  CreateDatabaseResponse createDatabaseWithOptions(shared_ptr<CreateDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatabaseResponse createDatabase(shared_ptr<CreateDatabaseRequest> request);
  CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetworkWithOptions(shared_ptr<CreateGlobalDatabaseNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetwork(shared_ptr<CreateGlobalDatabaseNetworkRequest> request);
  CreateParameterGroupResponse createParameterGroupWithOptions(shared_ptr<CreateParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParameterGroupResponse createParameterGroup(shared_ptr<CreateParameterGroupRequest> request);
  CreateStoragePlanResponse createStoragePlanWithOptions(shared_ptr<CreateStoragePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoragePlanResponse createStoragePlan(shared_ptr<CreateStoragePlanRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteBackupResponse deleteBackupWithOptions(shared_ptr<DeleteBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBackupResponse deleteBackup(shared_ptr<DeleteBackupRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
  DeleteDBClusterEndpointResponse deleteDBClusterEndpointWithOptions(shared_ptr<DeleteDBClusterEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterEndpointResponse deleteDBClusterEndpoint(shared_ptr<DeleteDBClusterEndpointRequest> request);
  DeleteDBEndpointAddressResponse deleteDBEndpointAddressWithOptions(shared_ptr<DeleteDBEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBEndpointAddressResponse deleteDBEndpointAddress(shared_ptr<DeleteDBEndpointAddressRequest> request);
  DeleteDBLinkResponse deleteDBLinkWithOptions(shared_ptr<DeleteDBLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBLinkResponse deleteDBLink(shared_ptr<DeleteDBLinkRequest> request);
  DeleteDBNodesResponse deleteDBNodesWithOptions(shared_ptr<DeleteDBNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBNodesResponse deleteDBNodes(shared_ptr<DeleteDBNodesRequest> request);
  DeleteDatabaseResponse deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatabaseResponse deleteDatabase(shared_ptr<DeleteDatabaseRequest> request);
  DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetworkWithOptions(shared_ptr<DeleteGlobalDatabaseNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetwork(shared_ptr<DeleteGlobalDatabaseNetworkRequest> request);
  DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(shared_ptr<DeleteMaskingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMaskingRulesResponse deleteMaskingRules(shared_ptr<DeleteMaskingRulesRequest> request);
  DeleteParameterGroupResponse deleteParameterGroupWithOptions(shared_ptr<DeleteParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParameterGroupResponse deleteParameterGroup(shared_ptr<DeleteParameterGroupRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(shared_ptr<DescribeAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(shared_ptr<DescribeAutoRenewAttributeRequest> request);
  DescribeBackupLogsResponse describeBackupLogsWithOptions(shared_ptr<DescribeBackupLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupLogsResponse describeBackupLogs(shared_ptr<DescribeBackupLogsRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupTasksResponse describeBackupTasksWithOptions(shared_ptr<DescribeBackupTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupTasksResponse describeBackupTasks(shared_ptr<DescribeBackupTasksRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(shared_ptr<DescribeCharacterSetNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCharacterSetNameResponse describeCharacterSetName(shared_ptr<DescribeCharacterSetNameRequest> request);
  DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelistWithOptions(shared_ptr<DescribeDBClusterAccessWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelist(shared_ptr<DescribeDBClusterAccessWhitelistRequest> request);
  DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAttributeResponse describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request);
  DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollectorWithOptions(shared_ptr<DescribeDBClusterAuditLogCollectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollector(shared_ptr<DescribeDBClusterAuditLogCollectorRequest> request);
  DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResourcesWithOptions(shared_ptr<DescribeDBClusterAvailableResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResources(shared_ptr<DescribeDBClusterAvailableResourcesRequest> request);
  DescribeDBClusterEndpointsResponse describeDBClusterEndpointsWithOptions(shared_ptr<DescribeDBClusterEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterEndpointsResponse describeDBClusterEndpoints(shared_ptr<DescribeDBClusterEndpointsRequest> request);
  DescribeDBClusterMigrationResponse describeDBClusterMigrationWithOptions(shared_ptr<DescribeDBClusterMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterMigrationResponse describeDBClusterMigration(shared_ptr<DescribeDBClusterMigrationRequest> request);
  DescribeDBClusterMonitorResponse describeDBClusterMonitorWithOptions(shared_ptr<DescribeDBClusterMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterMonitorResponse describeDBClusterMonitor(shared_ptr<DescribeDBClusterMonitorRequest> request);
  DescribeDBClusterParametersResponse describeDBClusterParametersWithOptions(shared_ptr<DescribeDBClusterParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterParametersResponse describeDBClusterParameters(shared_ptr<DescribeDBClusterParametersRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(shared_ptr<DescribeDBClusterSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterSSLResponse describeDBClusterSSL(shared_ptr<DescribeDBClusterSSLRequest> request);
  DescribeDBClusterTDEResponse describeDBClusterTDEWithOptions(shared_ptr<DescribeDBClusterTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterTDEResponse describeDBClusterTDE(shared_ptr<DescribeDBClusterTDERequest> request);
  DescribeDBClusterVersionResponse describeDBClusterVersionWithOptions(shared_ptr<DescribeDBClusterVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterVersionResponse describeDBClusterVersion(shared_ptr<DescribeDBClusterVersionRequest> request);
  DescribeDBClustersResponse describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersResponse describeDBClusters(shared_ptr<DescribeDBClustersRequest> request);
  DescribeDBClustersWithBackupsResponse describeDBClustersWithBackupsWithOptions(shared_ptr<DescribeDBClustersWithBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersWithBackupsResponse describeDBClustersWithBackups(shared_ptr<DescribeDBClustersWithBackupsRequest> request);
  DescribeDBInitializeVariableResponse describeDBInitializeVariableWithOptions(shared_ptr<DescribeDBInitializeVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInitializeVariableResponse describeDBInitializeVariable(shared_ptr<DescribeDBInitializeVariableRequest> request);
  DescribeDBLinksResponse describeDBLinksWithOptions(shared_ptr<DescribeDBLinksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBLinksResponse describeDBLinks(shared_ptr<DescribeDBLinksRequest> request);
  DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(shared_ptr<DescribeDBNodePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBNodePerformanceResponse describeDBNodePerformance(shared_ptr<DescribeDBNodePerformanceRequest> request);
  DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(shared_ptr<DescribeDBProxyPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBProxyPerformanceResponse describeDBProxyPerformance(shared_ptr<DescribeDBProxyPerformanceRequest> request);
  DescribeDatabasesResponse describeDatabasesWithOptions(shared_ptr<DescribeDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDatabasesResponse describeDatabases(shared_ptr<DescribeDatabasesRequest> request);
  DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(shared_ptr<DescribeDetachedBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDetachedBackupsResponse describeDetachedBackups(shared_ptr<DescribeDetachedBackupsRequest> request);
  DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetworkWithOptions(shared_ptr<DescribeGlobalDatabaseNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetwork(shared_ptr<DescribeGlobalDatabaseNetworkRequest> request);
  DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworksWithOptions(shared_ptr<DescribeGlobalDatabaseNetworksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworks(shared_ptr<DescribeGlobalDatabaseNetworksRequest> request);
  DescribeLogBackupPolicyResponse describeLogBackupPolicyWithOptions(shared_ptr<DescribeLogBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogBackupPolicyResponse describeLogBackupPolicy(shared_ptr<DescribeLogBackupPolicyRequest> request);
  DescribeMaskingRulesResponse describeMaskingRulesWithOptions(shared_ptr<DescribeMaskingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMaskingRulesResponse describeMaskingRules(shared_ptr<DescribeMaskingRulesRequest> request);
  DescribeMetaListResponse describeMetaListWithOptions(shared_ptr<DescribeMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMetaListResponse describeMetaList(shared_ptr<DescribeMetaListRequest> request);
  DescribeParameterGroupResponse describeParameterGroupWithOptions(shared_ptr<DescribeParameterGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterGroupResponse describeParameterGroup(shared_ptr<DescribeParameterGroupRequest> request);
  DescribeParameterGroupsResponse describeParameterGroupsWithOptions(shared_ptr<DescribeParameterGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterGroupsResponse describeParameterGroups(shared_ptr<DescribeParameterGroupsRequest> request);
  DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterTemplatesResponse describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request);
  DescribePendingMaintenanceActionResponse describePendingMaintenanceActionWithOptions(shared_ptr<DescribePendingMaintenanceActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePendingMaintenanceActionResponse describePendingMaintenanceAction(shared_ptr<DescribePendingMaintenanceActionRequest> request);
  DescribePendingMaintenanceActionsResponse describePendingMaintenanceActionsWithOptions(shared_ptr<DescribePendingMaintenanceActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePendingMaintenanceActionsResponse describePendingMaintenanceActions(shared_ptr<DescribePendingMaintenanceActionsRequest> request);
  DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicyWithOptions(shared_ptr<DescribePolarSQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicy(shared_ptr<DescribePolarSQLCollectorPolicyRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeScheduleTasksResponse describeScheduleTasksWithOptions(shared_ptr<DescribeScheduleTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduleTasksResponse describeScheduleTasks(shared_ptr<DescribeScheduleTasksRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeStoragePlanResponse describeStoragePlanWithOptions(shared_ptr<DescribeStoragePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoragePlanResponse describeStoragePlan(shared_ptr<DescribeStoragePlanRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  FailoverDBClusterResponse failoverDBClusterWithOptions(shared_ptr<FailoverDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FailoverDBClusterResponse failoverDBCluster(shared_ptr<FailoverDBClusterRequest> request);
  GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(shared_ptr<GrantAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantAccountPrivilegeResponse grantAccountPrivilege(shared_ptr<GrantAccountPrivilegeRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagResourcesForRegionResponse listTagResourcesForRegionWithOptions(shared_ptr<ListTagResourcesForRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesForRegionResponse listTagResourcesForRegion(shared_ptr<ListTagResourcesForRegionRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(shared_ptr<ModifyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountPasswordResponse modifyAccountPassword(shared_ptr<ModifyAccountPasswordRequest> request);
  ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(shared_ptr<ModifyAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(shared_ptr<ModifyAutoRenewAttributeRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelistWithOptions(shared_ptr<ModifyDBClusterAccessWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelist(shared_ptr<ModifyDBClusterAccessWhitelistRequest> request);
  ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollectorWithOptions(shared_ptr<ModifyDBClusterAuditLogCollectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollector(shared_ptr<ModifyDBClusterAuditLogCollectorRequest> request);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request);
  ModifyDBClusterEndpointResponse modifyDBClusterEndpointWithOptions(shared_ptr<ModifyDBClusterEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterEndpointResponse modifyDBClusterEndpoint(shared_ptr<ModifyDBClusterEndpointRequest> request);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request);
  ModifyDBClusterMigrationResponse modifyDBClusterMigrationWithOptions(shared_ptr<ModifyDBClusterMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMigrationResponse modifyDBClusterMigration(shared_ptr<ModifyDBClusterMigrationRequest> request);
  ModifyDBClusterMonitorResponse modifyDBClusterMonitorWithOptions(shared_ptr<ModifyDBClusterMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMonitorResponse modifyDBClusterMonitor(shared_ptr<ModifyDBClusterMonitorRequest> request);
  ModifyDBClusterParametersResponse modifyDBClusterParametersWithOptions(shared_ptr<ModifyDBClusterParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterParametersResponse modifyDBClusterParameters(shared_ptr<ModifyDBClusterParametersRequest> request);
  ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZoneWithOptions(shared_ptr<ModifyDBClusterPrimaryZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZone(shared_ptr<ModifyDBClusterPrimaryZoneRequest> request);
  ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(shared_ptr<ModifyDBClusterSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterSSLResponse modifyDBClusterSSL(shared_ptr<ModifyDBClusterSSLRequest> request);
  ModifyDBClusterTDEResponse modifyDBClusterTDEWithOptions(shared_ptr<ModifyDBClusterTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterTDEResponse modifyDBClusterTDE(shared_ptr<ModifyDBClusterTDERequest> request);
  ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(shared_ptr<ModifyDBDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBDescriptionResponse modifyDBDescription(shared_ptr<ModifyDBDescriptionRequest> request);
  ModifyDBEndpointAddressResponse modifyDBEndpointAddressWithOptions(shared_ptr<ModifyDBEndpointAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBEndpointAddressResponse modifyDBEndpointAddress(shared_ptr<ModifyDBEndpointAddressRequest> request);
  ModifyDBNodeClassResponse modifyDBNodeClassWithOptions(shared_ptr<ModifyDBNodeClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBNodeClassResponse modifyDBNodeClass(shared_ptr<ModifyDBNodeClassRequest> request);
  ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaModeWithOptions(shared_ptr<ModifyDBNodeHotReplicaModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaMode(shared_ptr<ModifyDBNodeHotReplicaModeRequest> request);
  ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetworkWithOptions(shared_ptr<ModifyGlobalDatabaseNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetwork(shared_ptr<ModifyGlobalDatabaseNetworkRequest> request);
  ModifyLogBackupPolicyResponse modifyLogBackupPolicyWithOptions(shared_ptr<ModifyLogBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLogBackupPolicyResponse modifyLogBackupPolicy(shared_ptr<ModifyLogBackupPolicyRequest> request);
  ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(shared_ptr<ModifyMaskingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMaskingRulesResponse modifyMaskingRules(shared_ptr<ModifyMaskingRulesRequest> request);
  ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceActionWithOptions(shared_ptr<ModifyPendingMaintenanceActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceAction(shared_ptr<ModifyPendingMaintenanceActionRequest> request);
  RemoveDBClusterFromGDNResponse removeDBClusterFromGDNWithOptions(shared_ptr<RemoveDBClusterFromGDNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDBClusterFromGDNResponse removeDBClusterFromGDN(shared_ptr<RemoveDBClusterFromGDNRequest> request);
  ResetAccountResponse resetAccountWithOptions(shared_ptr<ResetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountResponse resetAccount(shared_ptr<ResetAccountRequest> request);
  RestartDBNodeResponse restartDBNodeWithOptions(shared_ptr<RestartDBNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBNodeResponse restartDBNode(shared_ptr<RestartDBNodeRequest> request);
  RestoreTableResponse restoreTableWithOptions(shared_ptr<RestoreTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreTableResponse restoreTable(shared_ptr<RestoreTableRequest> request);
  RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(shared_ptr<RevokeAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeAccountPrivilegeResponse revokeAccountPrivilege(shared_ptr<RevokeAccountPrivilegeRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TempModifyDBNodeResponse tempModifyDBNodeWithOptions(shared_ptr<TempModifyDBNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TempModifyDBNodeResponse tempModifyDBNode(shared_ptr<TempModifyDBNodeRequest> request);
  TransformDBClusterPayTypeResponse transformDBClusterPayTypeWithOptions(shared_ptr<TransformDBClusterPayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransformDBClusterPayTypeResponse transformDBClusterPayType(shared_ptr<TransformDBClusterPayTypeRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeDBClusterMinorVersionResponse upgradeDBClusterMinorVersionWithOptions(shared_ptr<UpgradeDBClusterMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBClusterMinorVersionResponse upgradeDBClusterMinorVersion(shared_ptr<UpgradeDBClusterMinorVersionRequest> request);
  UpgradeDBClusterVersionResponse upgradeDBClusterVersionWithOptions(shared_ptr<UpgradeDBClusterVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBClusterVersionResponse upgradeDBClusterVersion(shared_ptr<UpgradeDBClusterVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Polardb20170801

#endif
