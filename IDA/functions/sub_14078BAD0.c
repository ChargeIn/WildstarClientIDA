//----- (000000014078BAD0) ----------------------------------------------------
__int64 __fastcall sub_14078BAD0(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	__int64 v5; // rdx
	unsigned __int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rdi
	unsigned __int64 v12; // r8
	__int64 v13; // rax
	unsigned int* v14; // r9
	__int64 result; // rax
	__int64 v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+28h] [rbp-10h]

	if (a1 == a2)
	{
		v5 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v5 = *(_QWORD*)(v5 - 32);
		*(_DWORD*)(v5 + 8) = *(_DWORD*)(v5 - 24);
		*(_QWORD*)(a1 + 16) += 16i64;
		v6 = *(_QWORD*)(a1 + 16);
		v7 = (_QWORD*)(v6 - 32);
		if (v6 - 32 < v6)
		{
			do
			{
				v8 = *v7;
				v7 += 2;
				*(v7 - 4) = v8;
				*((_DWORD*)v7 - 6) = *((_DWORD*)v7 - 2);
			} while ((unsigned __int64)v7 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	else
	{
		*(_QWORD*)(a2 + 16) -= 16i64;
		v9 = *(_QWORD*)(a2 + 16);
		v10 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 16) = v10 + 16;
		*(_QWORD*)v10 = *(_QWORD*)v9;
		*(_DWORD*)(v10 + 8) = *(_DWORD*)(v9 + 8);
	}
	v11 = *(_QWORD*)(a1 + 16);
	v12 = -1i64;
	do
		++v12;
	while (*((_BYTE*)a3 + v12));
	v13 = sub_140062650(a1, a3, v12);
	v14 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v16 = v13;
	v17 = 4;
	result = sub_14005EA50(a1, (__int64*)(v11 - 32), (int*)&v16, v14);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}

