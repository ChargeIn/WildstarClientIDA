//----- (00000001405D9DB0) ----------------------------------------------------
__int64 __fastcall sub_1405D9DB0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v5; // rcx
	unsigned int v6; // r15d
	__int16* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r13
	int* v10; // rsi
	__int64 v11; // r12
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int16* v16; // [rsp+68h] [rbp+20h]

	result = sub_1405D6880(a1, a2, a3);
	v6 = result;
	if ((int)result >= 0)
	{
		v7 = sub_14034BDD0(v5, *(_DWORD*)(*(_QWORD*)(a1 + 176) + 64i64));
		v16 = v7;
		v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		v9 = v8;
		if (v8)
		{
			v10 = *(int**)(v8 + 136);
			v11 = *(_QWORD*)(a1 + 336);
			if (v10)
			{
				v12 = 0i64;
				if (*(_WORD*)v10)
				{
					do
						++v12;
					while (*((_WORD*)v10 + v12));
				}
				v13 = sub_14018B280(2 * v12 + 18, 0);
				if (v13)
				{
					*((_QWORD*)v13 + 1) = v12;
					*(_QWORD*)v13 = off_140B55060;
				}
				else
				{
					v13 = 0i64;
				}
				v14 = v13 + 4;
				v15 = 2 * v12;
				sub_1407DB590(v13 + 4, v10, v15);
				*(_WORD*)((char*)v14 + v15) = 0;
				v7 = v16;
				*(_QWORD*)(a1 + 336) = v14;
			}
			else
			{
				*(_QWORD*)(a1 + 336) = 0i64;
			}
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			sub_14045B030(v9, (int*)v7);
			return v6;
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}
// 1405D9DDF: variable 'v5' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

