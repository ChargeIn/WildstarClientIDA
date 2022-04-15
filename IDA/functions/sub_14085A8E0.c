#include "../winhttp.h"

//----- (000000014085A8E0) ----------------------------------------------------
void __fastcall sub_14085A8E0(__int64 a1, unsigned int a2, int a3, _DWORD* a4)
{
	__int64 v5; // r8
	bool v7; // zf
	unsigned int v8; // edx
	__int64 v9; // rax
	_QWORD* v10; // rdx
	_DWORD* v11; // rax
	_DWORD* v12; // rcx
	int* v13; // rax
	int v14; // ecx

	*a4 = -1;
	v5 = *(_QWORD*)(a1 + 48);
	if (v5)
	{
		v7 = *(_BYTE*)(v5 + 8i64 * a2 + 1) == 0;
		v8 = *(_DWORD*)(v5 + 8i64 * a2 + 4);
		v9 = v7
			? sub_14083EDE0(qword_140C61BA8 + 398, v8)
			: sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328), v8);
		v10 = (_QWORD*)v9;
		if (v9)
		{
			v11 = *(_DWORD**)(v9 + 48);
			v12 = (_DWORD*)v10[7];
			if (v11 == v12)
				goto LABEL_12;
			do
			{
				if (*v11 == a3)
					break;
				v11 += 2;
			} while (v11 != v12);
			if (v11 == v12 || (v13 = v11 + 1) == 0i64)
				LABEL_12:
			v14 = 0;
			else
				v14 = *v13;
			*a4 = v14;
			(*(void(__fastcall**)(_QWORD*))(*v10 + 16i64))(v10);
		}
	}
}

