//----- (00000001406751E0) ----------------------------------------------------
void __fastcall sub_1406751E0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	unsigned int v4; // edx
	int v5; // edi
	int v6; // ebp
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rbx
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rax
	__int64* v14; // rax
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]

	if (*(_DWORD*)(a1 + 1344))
	{
		v3 = *(_QWORD*)(a1 + 168);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 472);
			v5 = 0;
			v6 = 0;
			if (v4)
			{
				v6 = 1;
				sub_140452AD0(a1, v4, a2);
			}
			v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v9 = *(_QWORD*)(v8 + 16);
			*(_QWORD*)v9 = *v7;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
			*(_QWORD*)(v8 + 16) += 16i64;
			v10 = *(_QWORD*)(a2 + 16);
			v11 = (unsigned __int64*)sub_14018F0E0(&v15, L"bGrantsGenericUnlock")[1];
			if (v11)
			{
				v12 = -1i64;
				do
					++v12;
				while (*((_BYTE*)v11 + v12));
				sub_140058710(v10, v11, v12);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v10 + 16) + 8i64) = 0;
				*(_QWORD*)(v10 + 16) += 16i64;
			}
			if (v16)
				sub_14018B900(v16, 0);
			v13 = *(_DWORD**)(v10 + 16);
			LOBYTE(v5) = v6 != 0;
			v13[2] = 1;
			*v13 = v5;
			*(_QWORD*)(v10 + 16) += 16i64;
			v14 = (__int64*)sub_1400580E0(v10, -3);
			sub_14005EA50(v10, v14, (int*)(*(_QWORD*)(v10 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v10 + 16) - 16i64));
			*(_QWORD*)(v10 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
}
// 140675245: variable 'v8' is possibly undefined
// 140B30138: using guessed type wchar_t aBgrantsgeneric[21];

