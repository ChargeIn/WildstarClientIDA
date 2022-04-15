#include "../winhttp.h"

//----- (00000001400FDDF0) ----------------------------------------------------
void __fastcall sub_1400FDDF0(__int64 a1, char a2, _QWORD* a3)
{
	__int16* v3; // rax
	unsigned __int64 v7; // rbp
	_QWORD* v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // rbp
	int** v11; // r14
	int* v12; // rax
	int* v13; // rbx
	int* v14; // rcx
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rbx
	_QWORD* v17; // rbx
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	_QWORD* v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]

	if (a3)
	{
		v3 = &word_140B7B704;
		if (a3[4])
			v3 = (__int16*)a3[4];
		if (v3)
		{
			v18 = 0i64;
			v19 = a3;
			LOBYTE(v20) = a2;
			v7 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v18);
			v8 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v7 % *(_QWORD*)(a1 + 8)));
			if (!v8)
				goto LABEL_9;
			while (v7 != *v8 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 32))(&v18, v8 + 2))
			{
				v8 = (_QWORD*)v8[1];
				if (!v8)
					goto LABEL_9;
			}
			if (v8 == (_QWORD*)-40i64)
			{
			LABEL_9:
				(*(void(__fastcall**)(_QWORD*)) * a3)(a3);
				v9 = *(_QWORD*)(a1 + 8);
				v18 = 0i64;
				v19 = a3;
				LOBYTE(v20) = a2;
				if (*(_QWORD*)a1 == v9)
					sub_1400290D0(a1);
				v10 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v18);
				v11 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v10 % *(_QWORD*)(a1 + 8)));
				v12 = sub_14018B280(48i64, 0);
				v13 = v12;
				if (v12)
				{
					v14 = *v11;
					*(_QWORD*)v12 = v10;
					*((_QWORD*)v12 + 1) = v14;
					*((_QWORD*)v12 + 2) = v18;
					*((_QWORD*)v12 + 3) = v19;
					*((_QWORD*)v12 + 4) = v20;
					*((_QWORD*)v12 + 5) = a3;
					(*(void(__fastcall**)(_QWORD*)) * a3)(a3);
				}
				else
				{
					v13 = 0i64;
				}
				*v11 = v13;
				++* (_QWORD*)a1;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD*)) * a3)(a3);
				v18 = 0i64;
				v19 = a3;
				LOBYTE(v20) = a2;
				v15 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v18);
				v16 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v15 % *(_QWORD*)(a1 + 8)));
				if (v16)
				{
					while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 32))(&v18, v16 + 2))
					{
						v16 = (_QWORD*)v16[1];
						if (!v16)
							goto LABEL_26;
					}
					v17 = v16 + 5;
					if (v17 && (_QWORD*)*v17 != a3)
					{
						(*(void(__fastcall**)(_QWORD*)) * a3)(a3);
						if (*v17)
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v17 + 8i64))(*v17);
						*v17 = a3;
					}
				}
			}
		LABEL_26:
			(*(void(__fastcall**)(_QWORD*))(*a3 + 8i64))(a3);
		}
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;

