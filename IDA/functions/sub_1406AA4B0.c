//----- (00000001406AA4B0) ----------------------------------------------------
__int64 __fastcall sub_1406AA4B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	double v5; // xmm0_8
	int v6; // ebx
	int v7; // ebx
	int v8; // ebx
	int v9; // ebx
	int v10; // eax
	__int64 v11; // rcx
	int v12; // ebx
	int v13; // eax

	v2 = sub_1406A93C0(a1);
	v3 = v2;
	if (v2)
	{
		if (qword_140C65B98 && *(_DWORD*)(qword_140C65B98 + 268) == 4)
		{
			v4 = a1[2];
			v5 = (double)*(int*)(qword_140C65B98 + 404);
			*(_DWORD*)(v4 + 8) = 3;
			*(double*)v4 = v5;
		}
		else
		{
			v6 = sub_1405AD1B0(v2, 5);
			v7 = sub_1405AD1B0(v3, 10) + v6;
			v8 = sub_1405AD1B0(v3, 9) + v7;
			v9 = sub_1405AD1B0(v3, 7) + v8;
			v10 = sub_1405AD1B0(v3, 6);
			v11 = a1[2];
			v12 = v10 + v9;
			v13 = *(_DWORD*)(v3 + 440);
			*(_DWORD*)(v11 + 8) = 3;
			*(double*)v11 = (double)(v12 + v13);
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

