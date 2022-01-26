if(i==0){
            if(it[n-1] > it[0] && it[0] > it [1]) ans++;
            else if(it[n-1] < it[0] && it[0]<it [1]) ans++;
        }
        else if(i==n-1){
            if(it[n-2] > it[n-1] && it[n-1] > it[0]) ans++;
            else if(it[n-2] < it[n-1] && it[n-1] < it[0]) ans++;
        }
        else{
            if(it[i-1] > it[i] && it[i] > it[i + 1]) ans++;
            else if(it[i-1] < it[i] && it[i] < it[i + 1]) ans++;
        }