# Algorithm

1. **Start**
2. Set `Counter = 3`
3. **Read** `PIN`
4. Check if `PIN == 1234`

   * If **Yes**, set `Balance = 7500` and go to Step 5.
   * If **No**, print `"Wrong PIN"` and go to Step 6.
5. **Print** `"Your Balance is: " + Balance` and go to **End**.
6. Set `Counter = Counter - 1`
7. Check if `Counter == 0`

   * If **Yes**, print `"Card Is Locked!"` and go to **End**.
   * If **No**, go back to **Step 3**.
8. **End**
