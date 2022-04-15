#include "../winhttp.h"

//----- (00000001403BF1A0) ----------------------------------------------------
void sub_1403BF1A0()
{
	__int64* v0; // rbp
	__int64 v1; // rsi
	__int64 v2; // rax
	int* v3; // rdi
	__int64 v4; // rbx
	int* v5; // r8
	__int64 v6; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int* k; // rbx
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	int* v12; // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	v0 = (__int64*)qword_140C65898;
	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 5512);
	v11 = 0i64;
	v3 = 0i64;
	v4 = *(_QWORD*)(v2 + 16);
	v12 = 0i64;
	v13 = 0i64;
	if (v4 != v2)
	{
		do
		{
			v5 = (int*)(v4 + 32);
			if (v3 == (int*)v1)
			{
				sub_14017B140(&v10, v3, v5);
				v1 = v13;
				v3 = v12;
			}
			else
			{
				if (v3)
					*v3 = *v5;
				v12 = ++v3;
			}
			v6 = *(_QWORD*)(v4 + 24);
			if (v6)
			{
				v4 = *(_QWORD*)(v4 + 24);
				for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
					v4 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = j;
				if (*(_QWORD*)(v4 + 24) != j)
					v4 = j;
			}
		} while (v4 != v0[689]);
		v1 = v11;
	}
	for (k = (unsigned int*)v1; k != (unsigned int*)v3; ++k)
		sub_1403BEF30(v0, *k, 1);
	if (v1)
		sub_14018B900(v1, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

