#### 台股總覽
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')
df = apu.taiwan_stock_info()
```

#### 台灣股價資料表
```Python
fron FinMind.data import DataLoader

api=DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_daily(
							stock_id='2330',
							start_date='2020-04-02',
							end_date='2020-04-12'
)
```

#### 台灣股價歷史逐筆資料表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_tick(
						   sotck_id='2330',
						   date='2020-01-02')
```

#### 個股融資融券表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_margin_purchase_short_sale(
												 stock_id='2330',
												 start_date='xx',
												 end_date='xx'
)
```

#### 外資持股表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = apu.taiwan_stock_shareholding(
								   stock_id='x',
								   start_date='x',
								   end_date='x'
)
```

#### 個股三大法人買賣表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_institutional_investors(
											  stock_id="2330", 
											  start_date='2020-04-01', 
											  end_date='2020-04-12'
)
```

#### 台灣市場整體融資融劵表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_margin_purchase_short_sale_total(									  start_date='2020-04-01', 
)
```

#### 資產負債表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_balance_sheet(
									stock_id="2330",
									start_date='2019-03-31')
```

#### 現金流量表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_cash_flows_statement(
									stock_id="2330",
									start_date='2019-03-31')
```

#### 除權除息結果表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_dividend_result(
									stock_id="2330",
									start_date='2019-03-31')
```

#### 月營收表
```Python
from FinMind.data import DataLoader

api = DataLoader()
api.login_by_token(api_token='token')
api.login(user_id='Rich', password='Rich0912@')

df = api.taiwan_stock_month_revenue(
									stock_id="2330",
									start_date='2019-03-31')
```