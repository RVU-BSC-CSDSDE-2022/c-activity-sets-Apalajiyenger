int compare_two_strings(char *s1, char *s2)
{
	for(int i=0;s1[i] != '\0 && s2[i] != '\0;i++)
	{
		if (s1[i] > s2[i]) 
			return 1;
                       if (s2[i] > s1[i])
			return -1
	}
            if ( s1[i] > s2[i] ) 
		return 1;
	else s2[i] > s1[i]
		return -1;
	return 0;
}
