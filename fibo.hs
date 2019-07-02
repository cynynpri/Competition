module Fibo (main) where

main :: IO()
main = do
    let num = 16
    putStrLn ("getfibo["++ (show num) ++"] = " ++ (show (getfibo num)))
    let num = 8808
    putStrLn ("getfibo["++ (show num) ++ "] = " ++ (show (getfibo num)))

getfibo :: Int -> Integer
getfibo =  -- メモ化再帰のデモ．フィボナッチ数を返す.
    let fibo 0 = 0
        fibo 1 = 1
        fibo num = getfibo (num - 2) + getfibo (num - 1)
    in (map fibo [0 ..] !!)  -- Haskellにおけるメモ化再帰.
