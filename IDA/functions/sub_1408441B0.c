#include "../winhttp.h"

//----- (00000001408441B0) ----------------------------------------------------
void sub_1408441B0()
{
	unsigned __int64 v0; // rbx
	__int64 v1; // rdx
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rdi
	int v5; // ebx
	__int64 v6; // rax
	int v7; // eax

	if (dword_140C61FC0)
	{
		v0 = qword_140C61FA0;
		do
		{
			sub_14085FB30(*(_BYTE**)(v0 + 8), *(_DWORD*)(v0 + 16), *(_DWORD*)(v0 + 20));
			if (*(_DWORD*)(v0 + 16) == 4)
			{
				v1 = 0i64;
				v2 = qword_140C61F90;
				if (qword_140C61F90)
				{
					while (v2 != *(_QWORD*)(v0 + 8))
					{
						v1 = v2;
						v2 = *(_QWORD*)(v2 + 24);
						if (!v2)
							goto LABEL_15;
					}
					if (v2)
					{
						if (v2 == qword_140C61F90)
							qword_140C61F90 = *(_QWORD*)(v2 + 24);
						else
							*(_QWORD*)(v1 + 24) = *(_QWORD*)(v2 + 24);
						v3 = qword_140C61F98;
						if (v2 == qword_140C61F98)
							v3 = v1;
						--dword_140C61F88;
						qword_140C61F98 = v3;
					}
				}
			LABEL_15:
				v4 = *(_QWORD*)(v0 + 8);
				sub_140858590(v4);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 24i64))(v4, 0i64);
				v5 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 8i64))(v4, 0i64);
				sub_140881720(v5, v4);
			}
			v0 = qword_140C61FA0;
			if (qword_140C61FA0)
			{
				qword_140C61FA0 = *(_QWORD*)qword_140C61FA0;
				v6 = qword_140C61FA8;
				if (v0 == qword_140C61FA8)
					v6 = 0i64;
				qword_140C61FA8 = v6;
				if (v0 < qword_140C61FC8 || v0 >= qword_140C61FC8 + 32 * (unsigned __int64)(unsigned int)qword_140C61FB8)
				{
					sub_140881720(dword_140C10F20, v0);
				}
				else
				{
					*(_QWORD*)v0 = qword_140C61FB0;
					qword_140C61FB0 = v0;
				}
				v0 = qword_140C61FA0;
				v7 = --dword_140C61FC0;
			}
			else
			{
				v7 = dword_140C61FC0;
			}
		} while (v7);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61F98: using guessed type __int64 qword_140C61F98;
// 140C61FA0: using guessed type __int64 qword_140C61FA0;
// 140C61FA8: using guessed type __int64 qword_140C61FA8;
// 140C61FB0: using guessed type __int64 qword_140C61FB0;
// 140C61FB8: using guessed type __int64 qword_140C61FB8;
// 140C61FC0: using guessed type int dword_140C61FC0;
// 140C61FC8: using guessed type __int64 qword_140C61FC8;

