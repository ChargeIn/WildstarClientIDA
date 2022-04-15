//----- (00000001401A8D00) ----------------------------------------------------
void __fastcall sub_1401A8D00(__int64 a1, int a2)
{
	unsigned __int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	int* v6; // rax
	unsigned __int64 v7; // r8

	if (a2 > *(_DWORD*)(a1 + 88))
	{
		v3 = sub_14018A3E0(8i64 * a2);
		v4 = *(_QWORD*)a1;
		v5 = v3 >> 3;
		*(_DWORD*)(a1 + 88) = v5;
		if (v4 == a1 + 8)
		{
			v6 = sub_14018B280(8i64 * (int)v5, 0);
			v7 = 8i64 * *(int*)(a1 + 92);
			*(_QWORD*)a1 = v6;
			sub_1407DB590(v6, (int*)(a1 + 8), v7);
		}
		else
		{
			*(_QWORD*)a1 = sub_14018C320(v4, 8i64 * (int)v5, 0);
		}
	}
}

