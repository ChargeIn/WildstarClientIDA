//----- (000000014053BAB0) ----------------------------------------------------
int* __fastcall sub_14053BAB0(__int64 a1, __int64 a2)
{
	unsigned int v2; // edx
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	int* result; // rax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF
	int* v9; // [rsp+38h] [rbp+10h] BYREF
	int* v10; // [rsp+40h] [rbp+18h] BYREF

	v8 = a1;
	if (*(int*)a2 < 300)
		v2 = *(unsigned __int8*)(a2 + 4) | ((unsigned __int8)*(_DWORD*)a2 << 8);
	else
		v2 = -1;
	v3 = *(_QWORD*)(qword_140C65898 + 29656);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v4 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v8 = v3;
	result = (int*)v8;
	if (v8 == v3)
	{
		result = (int*)v3;
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < v2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				result = (int*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		}
		if (result == (int*)v3 || v2 < result[8])
		{
			v8 = v2;
			v9 = result;
			sub_140032B30(qword_140C65898 + 29648, &v10, (__int64*)&v9, &v8);
			result = v10;
		}
		result[9] = 1;
	}
	else
	{
		++* (_DWORD*)(v8 + 36);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

