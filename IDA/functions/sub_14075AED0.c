//----- (000000014075AED0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14075AED0(int* a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned __int64 result; // rax
	int* v5; // rbx
	int v6[10]; // [rsp+20h] [rbp-28h] BYREF

	v3 = a2 - (_QWORD)a1;
	result = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x6666666666666667i64) >> 64) >> 63;
	if (v3 / 20 > 1)
	{
		v5 = (int*)(a2 - 20);
		do
		{
			v6[0] = *v5;
			v6[1] = v5[1];
			v6[2] = v5[2];
			v6[3] = v5[3];
			v6[4] = v5[4];
			*v5 = *a1;
			v5[1] = a1[1];
			v5[2] = a1[2];
			v5[3] = a1[3];
			v5[4] = a1[4];
			sub_14075B1D0((__int64)a1, 0i64, (v3 - 20) / 20, v6);
			v5 -= 5;
			v3 = (char*)v5 - (char*)a1 + 20;
			result = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x6666666666666667i64) >> 64) >> 63;
		} while (v3 / 20 > 1);
	}
	return result;
}

