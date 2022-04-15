//----- (000000014066E2F0) ----------------------------------------------------
_DWORD* __fastcall sub_14066E2F0(_DWORD* a1)
{
	__int64 v2; // rcx
	_DWORD* result; // rax
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rcx
	int v9; // eax
	__int64* v10; // rcx
	int v11; // ecx
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)a1;
	result = (_DWORD*)(*(_QWORD*)(v2 + 24) + 32i64);
	if ((unsigned __int64)result < *(_QWORD*)(v2 + 16)
		&& result != dword_140A12138
		&& *(_DWORD*)(*(_QWORD*)(v2 + 24) + 40i64) == 5)
	{
		result = (_DWORD*)sub_1400585E0(v2, 2);
		if ((_DWORD)result)
		{
			v4 = *(_QWORD*)a1;
			a1[3] = 0;
			*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
			*(_QWORD*)(v4 + 16) += 16i64;
			while (1)
			{
				v5 = *(_QWORD*)a1;
				v6 = (__int64*)dword_140A12138;
				v7 = *(_QWORD*)(*(_QWORD*)a1 + 16i64);
				if (*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 32i64 < v7)
					v6 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 32i64);
				result = (_DWORD*)sub_14005BA70(*(_QWORD*)a1, *v6, v7 - 16);
				if (!(_DWORD)result)
				{
					*(_QWORD*)(v5 + 16) -= 16i64;
					return result;
				}
				*(_QWORD*)(v5 + 16) += 16i64;
				v8 = *(_QWORD*)(*(_QWORD*)a1 + 16i64);
				v9 = *(_DWORD*)(v8 - 8);
				v10 = (__int64*)(v8 - 16);
				if (v9 == 3)
					goto LABEL_13;
				if (v9 == 4 && sub_14005AC80((char*)(*v10 + 32), (unsigned __int64*)&v14))
					break;
				LOBYTE(v11) = 0;
			LABEL_14:
				a1[3] |= 1 << v11;
				*(_QWORD*)(*(_QWORD*)a1 + 16i64) -= 16i64;
			}
			v13 = 3;
			v10 = &v12;
			v12 = v14;
		LABEL_13:
			v11 = (int)*(double*)v10;
			goto LABEL_14;
		}
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

