-- Sum the numbers that are multiples of the numbers specified in a list below a limit
sumMultiplesBelow :: (Integral a) => [a] -> a -> a
sumMultiplesBelow multiples limit = sum $ filter (isMultiple multiples) [1..limit-1]

-- Returns true if the second parameter is a multiple of one of the numbers in the list
isMultiple :: (Integral a) => [a] -> a -> Bool 
isMultiple []  _ = False
isMultiple (m:ms) x
	| mod x m == 0 = True
	| otherwise = isMultiple ms x
