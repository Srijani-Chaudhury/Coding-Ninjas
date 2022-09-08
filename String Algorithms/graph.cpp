#include <bits/stdc++.h>
#define sonkha int
#define loop_er_jonno for
#define fm loop_er_jonno(sonkha i=0; i<seddo; i++){
#define fn loop_er_jonno(sonkha i=0; i<srijani; i++){
#define vet vector<sonkha>
#define mope map<sonkha,sonkha>
#define jotokhon while
#define jodi if
#define ferot_dao return
#define amay_dao cin
#define tumi_nao cout
#define sajiye_dao sort
using namespace std;

sonkha main()
{
    sonkha srijani,seddo;
    vet wt;
    vector<vet>edge;
    mope mp;
    sonkha ans=0;

    amay_dao>>srijani>>seddo;
    /*
	Shakespeare produced most of his known works between 1589 and 1613.[11][12][d] 
	His early plays were primarily comedies and histories and are regarded as some of '
	the best works produced in these genres. own as romances) and collaborated with other playwrights
	*/
    fm
        sonkha s,d;
        amay_dao>>s>>d;
        vet v;
        v.push_back(s);
        /*He then wrote mainly tragedies until 1608, among t
	    hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	    rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
        v.push_back(d);
        mp[s]++;
        /*ported many apocryphal stories. Nicholas Ro
		we, Shakespeare's first biographer, recounted a Stratford legend that Shakespeare fled the town for London to escape prosecution for deer poaching in the estate of local squire Thomas Lucy. Shakespeare is also supposed to have taken his revenge on Lucy by writing a scurrilous ballad about him.[34][35] Another 18th-century story has Shakespeare starting his theatrical career minding the horses of theatre patrons in London.[36] John Aubrey 
		reported that Shakespeare had been a country schoolmaster.[37] Some 20th-century scholars suggested that Shakespeare may have bee*/
        mp[d]++;
        edge.push_back(v);
    }
    fn
        sonkha w;
        amay_dao>>w;
        /*He then wrote mainly tragedies until 1608, among t
	    hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	    rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
        wt.push_back(w);
    }
    sajiye_dao(wt.begin(), wt.end());
    sonkha e = srijani-1;

    mope val;
    jotokhon (mp.size()!=0)
    {
        sonkha Max_freq=INT_MIN;
        sonkha Max_freq_ele;
        loop_er_jonno(auto it:mp)
        {
        	   /*He then wrote mainly tragedies until 1608, among t
	           hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	           rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
            jodi(it.second>Max_freq)
            {
                Max_freq=it.second;
                /*He then wrote mainly tragedies until 1608, among t
	            hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	            rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
                Max_freq_ele=it.first;
            }
        }
        val[Max_freq_ele]=wt[e--];
        /*He then wrote mainly tragedies until 1608, among t
	    hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	    rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
        mp.erase(Max_freq_ele);
    }

    loop_er_jonno(auto it:edge)
    {
        ans += val[it[0]];
        /*He then wrote mainly tragedies until 1608, among t
	    hem Hamlet, Romeo and Juliet, Othello, King Lear, and Macbeth, all considered to be among the finest wo
	    rks in the English language.[2][3][4] In the last phase of his life, he wrote tragicomedies (also kn*/
        ans += val[it[1]];
    }

    tumi_nao<<ans;
    ferot_dao 0;
}
