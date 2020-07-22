// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int most = 0;
    for (int i = 1; i < candidate_count; i++)
    {
        if (candidates[i].votes > candidates[i - 1].votes)
        {
            most = candidates[i].votes;
        }
        else
        {
            most = candidates[i - 1].votes;
        }
    }
    
    for (int j = 0; j < candidate_count; j++)
    {
        if (candidates[j].votes >= most)
        {
            printf("%s\n", candidates[j].name);
        }
    }
}
