//----- (00000001404824C0) ----------------------------------------------------
int* __fastcall sub_1404824C0(__int64 a1, int a2, int a3)
{
	__int64 v4; // r9
	int* result; // rax
	__int64 v6; // rcx
	int* v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF
	int* v9; // [rsp+58h] [rbp+20h] BYREF

	v8 = a1;
	v4 = *(_QWORD*)(qword_140C65898 + 26312);
	result = (int*)v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			result = (int*)v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (result == (int*)v4 || a2 < result[8])
	{
		v8 = (unsigned int)a2;
		v9 = result;
		sub_1403D3E70(qword_140C65898 + 26304, &v7, (__int64*)&v9, &v8);
		result = v7;
	}
	result[9] = a3;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

