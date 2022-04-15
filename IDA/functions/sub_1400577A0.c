//----- (00000001400577A0) ----------------------------------------------------
void __fastcall sub_1400577A0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rax
	unsigned __int64 v4; // rbx
	int* v5; // rdx
	__int64 v6; // rax
	int* v7; // rcx
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rdx
	unsigned __int64 i; // r8
	__int64 v11; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(v1 + 16) - 16i64;
	if (*(_DWORD*)(v3 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620(*(_QWORD*)(a1 + 16), *(_QWORD*)(v1 + 16) - 16i64))
		{
			v4 = 0i64;
			v5 = 0i64;
			goto LABEL_8;
		}
		if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
			sub_14005E2C0(v1);
		v3 = *(_QWORD*)(v1 + 16) - 16i64;
	}
	v6 = *(_QWORD*)v3;
	v4 = *(_QWORD*)(v6 + 16);
	v5 = (int*)(v6 + 32);
LABEL_8:
	v7 = *(int**)a1;
	if (v4 > a1 - *(_QWORD*)a1 + 536)
	{
		v8 = (unsigned __int64)v7 - a1 - 24;
		if (v8)
		{
			sub_140058710(*(_QWORD*)(a1 + 16), (unsigned __int64*)(a1 + 24), v8);
			++* (_DWORD*)(a1 + 8);
			*(_QWORD*)a1 = a1 + 24;
			v9 = *(_QWORD*)(v1 + 16);
			for (i = v9 - 32; v9 > i; v9 -= 16i64)
			{
				*(_QWORD*)v9 = *(_QWORD*)(v9 - 16);
				*(_DWORD*)(v9 + 8) = *(_DWORD*)(v9 - 8);
			}
			v11 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)i = *(_QWORD*)v11;
			*(_DWORD*)(i + 8) = *(_DWORD*)(v11 + 8);
		}
		++* (_DWORD*)(a1 + 8);
		sub_1400575B0(a1);
	}
	else
	{
		sub_1407DB590(v7, v5, v4);
		*(_QWORD*)a1 += v4;
		*(_QWORD*)(v1 + 16) -= 16i64;
	}
}

