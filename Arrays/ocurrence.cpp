bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> flag;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        int temp = arr[i];
        if (temp != INT_MIN)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if (temp == arr.at(j))
                {
                    count++;
                    arr.at(j) = INT_MIN;
                }
            }
            if (count > 0)
            {
                flag.push_back(count);
            }
        }
    }

    for (int i = 0; i < flag.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < flag.size(); j++)
        {
            if (flag.at(i) == flag.at(j))
                cnt++;
        }
        if (cnt > 1)
            return false;
    }
    return true;
}