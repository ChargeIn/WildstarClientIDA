//----- (000000014005CF80) ----------------------------------------------------
__int64 __fastcall sub_14005CF80(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	__int64 v3; // rdx
	__int64 v4; // r11
	__int64 result; // rax
	int v6; // r8d
	__int64 v7; // r9
	__int64 v8; // rdx
	int v9; // r8d
	__int64* v10; // r9

	v2 = a2;
	v3 = *(_QWORD*)(a2 + 24);
	v4 = a1;
	if ((*(_BYTE*)(v3 + 9) & 3) != 0)
		result = sub_14005C960(a1, v3);
	if (*(_BYTE*)(v2 + 10))
	{
		v6 = 0;
		if (*(_BYTE*)(v2 + 11))
		{
			v7 = v2 + 40;
			do
			{
				if (*(int*)(v7 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)v7 + 9i64) & 3) != 0)
					sub_14005C960(v4, *(_QWORD*)v7);
				result = *(unsigned __int8*)(v2 + 11);
				++v6;
				v7 += 16i64;
			} while (v6 < (int)result);
		}
	}
	else
	{
		v8 = *(_QWORD*)(v2 + 32);
		if ((*(_BYTE*)(v8 + 9) & 3) != 0)
			result = sub_14005C960(v4, v8);
		v9 = 0;
		if (*(_BYTE*)(v2 + 11))
		{
			v10 = (__int64*)(v2 + 40);
			do
			{
				if ((*(_BYTE*)(*v10 + 9) & 3) != 0)
					sub_14005C960(v4, *v10);
				result = *(unsigned __int8*)(v2 + 11);
				++v9;
				++v10;
			} while (v9 < (int)result);
		}
	}
	return result;
}
// 14005CF99: variable 'v2' is possibly undefined
// 14005CFC3: variable 'v4' is possibly undefined
// 14005CFCD: variable 'v6' is possibly undefined
// 14005CFD0: variable 'v7' is possibly undefined
// 14005D016: variable 'v9' is possibly undefined
// 14005D019: variable 'v10' is possibly undefined

