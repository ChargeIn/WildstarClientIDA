//----- (000000014063A270) ----------------------------------------------------
__int64 __fastcall sub_14063A270(__int64 a1, int* a2)
{
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 result; // rax
	__int64 v8; // r8
	_DWORD* v9; // r9
	__int64 v10; // r8
	_DWORD* v11; // r9
	__int64 v12; // r8
	_DWORD* v13; // r9
	__int64 v14; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(32i64 * *a2 + a1 + 8);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	if (v5)
	{
		v6 = a2[1];
		do
		{
			if (*(_DWORD*)(v5 + 32) < v6)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v4 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v4 == v3 || (v14 = v4, (unsigned int)a2[1] < *(_DWORD*)(v4 + 32)))
		v14 = v3;
	result = v14;
	if (v14 != v3)
	{
		switch (*((_BYTE*)a2 + 12))
		{
		case 1:
			v12 = *(_QWORD*)(v14 + 40);
			v13 = *(_DWORD**)v12;
			if (*(_QWORD*)v12 != *(_QWORD*)v12 + 24i64 * *(_QWORD*)(v12 + 8))
			{
				do
				{
					if (*v13 == a2[2])
						v13[4] = 0;
					v13 += 6;
				} while (v13 != (_DWORD*)(**(_QWORD**)(v14 + 40) + 24i64 * *(_QWORD*)(*(_QWORD*)(v14 + 40) + 8i64)));
			}
			break;
		case 2:
			v10 = *(_QWORD*)(v14 + 40);
			v11 = *(_DWORD**)(v10 + 16);
			if (v11 != &v11[6 * *(_QWORD*)(v10 + 24)])
			{
				do
				{
					if (*v11 == a2[2])
						v11[4] = 0;
					v11 += 6;
				} while (v11 != (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 40) + 16i64)
					+ 24i64 * *(_QWORD*)(*(_QWORD*)(v14 + 40) + 24i64)));
			}
			break;
		case 3:
			v8 = *(_QWORD*)(v14 + 40);
			v9 = *(_DWORD**)(v8 + 32);
			if (v9 != &v9[6 * *(_QWORD*)(v8 + 40)])
			{
				do
				{
					if (*v9 == a2[2])
						v9[4] = 0;
					v9 += 6;
				} while (v9 != (_DWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 40) + 32i64)
					+ 24i64 * *(_QWORD*)(*(_QWORD*)(v14 + 40) + 40i64)));
			}
			break;
		}
	}
	return result;
}

