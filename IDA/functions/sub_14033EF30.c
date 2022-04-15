#include "../winhttp.h"

//----- (000000014033EF30) ----------------------------------------------------
__int64 sub_14033EF30()
{
	int v1; // edi
	__int64 v2; // rbx

	if (!qword_140C65850)
		return 2147500037i64;
	v1 = sub_14033F940(qword_140C65850, &qword_140C65848);
	if (v1 >= 0)
	{
		v2 = qword_140C65850;
		if (qword_140C65850)
		{
			sub_14033EFA0(qword_140C65850);
			sub_14018B900(v2, 0);
		}
		qword_140C65850 = 0i64;
	}
	return (unsigned int)v1;
}
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65850: using guessed type __int64 qword_140C65850;

