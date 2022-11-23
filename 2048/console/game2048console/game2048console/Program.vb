
Imports System.Math
Module Module1
    Sub Main()
        Dim x, y As Integer
        Dim a As Integer

        a = Integer.Parse(Console.ReadLine())
        For x = -10 To 10 Step 1
            If (x < 1) Then
                y = (a * x * x) / Sqrt(1 - 5 * x)
            ElseIf (x = 1) Then
                y = e ^ a * x * x + 1.17
            ElseIf (x > 1) Then
                y = (1 / tan(a * x * x + 2.25)) ^ 2
            End If
            Console.WriteLine(y)
        Next
    End Sub


End Module

