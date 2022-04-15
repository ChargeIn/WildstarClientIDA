//----- (0000000140190360) ----------------------------------------------------
__int64 __fastcall sub_140190360(__int64 a1, int* a2, int* a3, int* a4, int* a5)
{
	unsigned __int64 v6; // rax
	signed __int64 v7; // rbx
	int* v10; // rbx
	int* v11; // rbx

	v6 = (char*)a3 - (char*)a2;
	v7 = (char*)a5 - (char*)a4;
	if ((char*)a3 - (char*)a2 < (char*)a5 - (char*)a4)
	{
		v11 = (int*)((char*)a4 + v6);
		sub_1407DB590(a2, a4, v6);
		sub_140190400(a1, a3, v11, a5);
	}
	else
	{
		sub_1407DB590(a2, a4, (char*)a5 - (char*)a4);
		v10 = (int*)((char*)a2 + v7);
		if (v10 != a3)
		{
			sub_1407DB590(v10, a3, *(_QWORD*)(a1 + 16) - (_QWORD)a3 + 1i64);
			*(_QWORD*)(a1 + 16) += (char*)v10 - (char*)a3;
		}
	}
	return a1;
}

