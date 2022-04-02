#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<double>> vertices;

    for (int i = 0; i < 3; i++)
    {
        vector<double> col;

        for (int j = 0; j < 2; j++)
        {

            double item;
            cin >> item;
            col.push_back(item);
        }
        vertices.push_back(col);
    }

    for (int i = 0; i < 3; i++)
    {
        double x, y;
        if (i == 0)
        {
            x = vertices[1][0] - vertices[2][0];
            y = vertices[1][1] - vertices[2][1];
        }
        else if (i == 1)
        {
            x = vertices[0][0] - vertices[1][0];
            y = vertices[0][1] - vertices[1][1];
        }
        else
        {
            x = vertices[0][0] - vertices[2][0];
            y = vertices[0][1] - vertices[2][1];
        }

        if (x == 0)
        {
            cout << "inf" << endl;
            continue;
        }
        else
        {
            double s = (y / x);
            if (s == 0)
            {
                s = 0;
                printf("%1.2f", (float)s);
            }
            else
            {
                s = -1 / s;
                printf("%1.2f", (float)s);
            }

            cout << endl;
        }
    }

    return 0;
}
