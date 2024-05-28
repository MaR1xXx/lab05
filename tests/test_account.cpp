#include <gtest/gtest.h>
#include "gmock/gmock.h"

#include "Account.h"

class MockAccount: public Account {
public:
  MockAccount(int id, int balance): Account(id, balance){}
  // MOCK_CONST_METHOD0(id, int());
  // MOCK_CONST_METHOD0(GetBalance, int());
  // MOCK_METHOD1(ChangeBalance, void(int));
  // MOCK_METHOD0(Lock, void());
  // MOCK_METHOD0(Unlock, void());
};

TEST(Account, Init) {
  MockAccount ac(12, 100);
  // EXPECT_CALL(ac, GetBalance());
  // EXPECT_CALL(ac, id());
  EXPECT_EQ(ac.Account::GetBalance(), 100);
  EXPECT_EQ(ac.Account::id(), 12);
}

TEST(Account, ChangeBalance) {
  MockAccount ac(12, 100);
  // EXPECT_CALL(ac, ChangeBalance(testing::_)).Times(4);
  // EXPECT_CALL(ac, Lock()).Times(4);
  // EXPECT_CALL(ac, GetBalance()).Times(2);
  // EXPECT_CALL(ac, Unlock());
  EXPECT_THROW(ac.Account::ChangeBalance(20), std::runtime_error);
  ac.Account::Lock();
  ac.Account::ChangeBalance(20);
  EXPECT_EQ(ac.Account::GetBalance(), 120);
  ac.Account::ChangeBalance(-30);
  EXPECT_EQ(ac.Account::GetBalance(), 90);
  ac.Account::Unlock();
  EXPECT_THROW(ac.Account::ChangeBalance(20), std::runtime_error);
}

TEST(Account, Lock) {
  MockAccount ac(12, 100);
  // EXPECT_CALL(ac, Unlock());
  // EXPECT_CALL(ac, Lock()).Times(2);
  ac.Account::Unlock();
  ac.Account::Lock();
  EXPECT_THROW(ac.Account::Lock(), std::runtime_error);
}






