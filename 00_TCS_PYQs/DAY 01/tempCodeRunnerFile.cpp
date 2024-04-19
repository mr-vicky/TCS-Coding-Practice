    int count = 0;
            for(int i = 2; i <= n; i++){
                if(is_prime_positions(i))
                    count++;
            }
            return count;
        }