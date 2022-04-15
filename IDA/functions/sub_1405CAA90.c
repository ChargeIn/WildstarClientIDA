#include "../winhttp.h"

//----- (00000001405CAA90) ----------------------------------------------------
void __fastcall sub_1405CAA90(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rbx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	_QWORD* v11; // rcx
	bool v12; // zf
	int v13; // eax
	__int64 v14; // [rsp+30h] [rbp+8h] BYREF

	v14 = a1;
	v3 = *a3;
	if (*a3)
	{
		do
		{
			v5 = *(_QWORD*)(v3 + 48);
			v6 = *(_QWORD*)(v3 + 8);
			if ((*(_BYTE*)(v5 + 88) & 0xC) != 0)
			{
				if (a2
					&& ((*(_BYTE*)(v5 + 72) & 1) != 0 || !v5 || *(_DWORD*)(v3 + 120) != *(_DWORD*)(a2 + 340))
					&& (int)sub_140548BD0(a2, v3) >= 0)
				{
					v9 = *(_DWORD*)(v3 + 36);
					if (v9 != 2 && *(_DWORD*)(v3 + 128))
					{
						if (v9 == 1)
							*(_DWORD*)(v3 + 76) = dword_140C636A8;
						*(_DWORD*)(v3 + 128) = 0;
					}
					goto LABEL_24;
				}
				v10 = *(_QWORD*)(v3 + 256);
				if (v10)
				{
					LODWORD(v14) = **(_DWORD**)(v3 + 48);
					v8 = v10 + 576;
					goto LABEL_17;
				}
			}
			else
			{
				v7 = *(_QWORD*)(v3 + 256);
				if (v7)
				{
					v8 = v7 + 576;
					LODWORD(v14) = *(_DWORD*)v5;
				LABEL_17:
					sub_1400EE810(v8, &v14);
				}
			}
			if (*(_QWORD*)v3)
				**(_QWORD**)v3 = *(_QWORD*)(v3 + 8);
			v11 = *(_QWORD**)(v3 + 8);
			if (v11)
				*v11 = *(_QWORD*)v3;
			v12 = *(_DWORD*)(v3 + 36) == 2;
			*(_QWORD*)(v3 + 256) = 0i64;
			*(_QWORD*)(v3 + 8) = 0i64;
			*(_QWORD*)v3 = 0i64;
			if (!v12)
			{
				v13 = dword_140C636A8;
				*(_DWORD*)(v3 + 36) = 2;
				*(_DWORD*)(v3 + 76) = v13;
			}
		LABEL_24:
			v3 = v6;
		} while (v6);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

