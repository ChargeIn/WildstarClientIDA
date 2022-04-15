//----- (00000001405D9F80) ----------------------------------------------------
__int64 __fastcall sub_1405D9F80(__int64 a1, __int64 a2, __int64* a3)
{
	__int64* v3; // rbx
	__int64 result; // rax
	unsigned int v6; // r12d
	__int64 v7; // rax
	__int64 v8; // r15
	int* v9; // rsi
	__int64 v10; // r13
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // rax

	v3 = a3;
	result = sub_1405D6880(a1, a2, a3);
	v6 = result;
	if ((int)result >= 0)
	{
		v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 88));
		v8 = v7;
		if (!v7)
			return 2147500037i64;
		v9 = *(int**)(v7 + 136);
		v10 = *(_QWORD*)(a1 + 336);
		if (v9)
		{
			v11 = 0i64;
			if (*(_WORD*)v9)
			{
				do
					++v11;
				while (*((_WORD*)v9 + v11));
			}
			v12 = sub_14018B280(2 * v11 + 18, 0);
			if (v12)
			{
				*((_QWORD*)v12 + 1) = v11;
				*(_QWORD*)v12 = off_140B55060;
			}
			else
			{
				v12 = 0i64;
			}
			v13 = v12 + 4;
			v14 = 2 * v11;
			sub_1407DB590(v12 + 4, v9, v14);
			*(_WORD*)((char*)v13 + v14) = 0;
			v3 = a3;
			*(_QWORD*)(a1 + 336) = v13;
		}
		else
		{
			*(_QWORD*)(a1 + 336) = 0i64;
		}
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		v15 = sub_1403D90D0(qword_140C65898, *((_DWORD*)v3 + 16));
		if (v15)
		{
			sub_14045B030(v8, *(int**)(v15 + 136));
			return v6;
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

