//----- (00000001407C2B30) ----------------------------------------------------
__int64 __fastcall sub_1407C2B30(_QWORD* a1, __int64 a2, int a3, int a4)
{
	__int64 result; // rax
	__int64 v5; // r11
	__int64* v6; // rbx
	__int64 v7; // r10
	__int64 v8; // r9
	__int64 v9; // r8
	__int64* v10; // r11
	__int64 v11; // rbx
	__int64 v12; // r10
	__int64 v13; // r9
	__int64 v14; // r8

	if (a3 >= a4)
	{
		if (a3 > a4)
		{
			v10 = &a1[a3 + 4];
			v11 = (unsigned int)(a3 - a4);
			do
			{
				v12 = *v10--;
				v10[1] = v12 + 1;
				v13 = *(_QWORD*)(*a1 + 8 * a2);
				v14 = *(_QWORD*)(a1[2] + 8 * v12);
				*(_QWORD*)(*a1 + 8 * a2) = v12;
				*(_QWORD*)(*a1 + 8 * v14) = v13;
				*(_QWORD*)(a1[2] + 8 * v13) = v14;
				result = a1[2];
				*(_QWORD*)(result + 8 * v12) = a2;
				--v11;
			} while (v11);
		}
	}
	else
	{
		result = a3;
		if (a3 < (__int64)a4)
		{
			v5 = a4 - (__int64)a3;
			v6 = &a1[a3 + 5];
			do
			{
				v7 = *v6++;
				*(v6 - 1) = --v7;
				v8 = *(_QWORD*)(*a1 + 8 * a2);
				v9 = *(_QWORD*)(a1[2] + 8 * v7);
				*(_QWORD*)(*a1 + 8 * a2) = v7;
				*(_QWORD*)(*a1 + 8 * v9) = v8;
				*(_QWORD*)(a1[2] + 8 * v8) = v9;
				result = a1[2];
				*(_QWORD*)(result + 8 * v7) = a2;
				--v5;
			} while (v5);
		}
	}
	return result;
}

