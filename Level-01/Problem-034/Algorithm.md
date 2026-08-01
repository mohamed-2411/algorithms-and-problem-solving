# Algorithm

Start

Read TotalSales

If TotalSales > 1000000 Then
    Percentage = 0.01
Else
    If TotalSales > 500000 Then
        Percentage = 0.02
    Else
        If TotalSales > 100000 Then
            Percentage = 0.03
        Else
            If TotalSales > 50000 Then
                Percentage = 0.05
            Else
                Percentage = 0
            End If
        End If
    End If
End If

TotalCommission = Percentage * TotalSales

Print TotalCommission

End