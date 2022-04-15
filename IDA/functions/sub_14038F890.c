#include "../winhttp.h"

//----- (000000014038F890) ----------------------------------------------------
int* __fastcall sub_14038F890(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	int v6; // edx
	int* result; // rax
	__int64 v8; // rbx
	__int64 v9; // rdi

	if (a2)
	{
		if (!*(_QWORD*)(a1 + 32))
		{
			v4 = *(_QWORD*)(a1 + 48);
			if (v4)
			{
				do
				{
					v5 = *(_QWORD*)(v4 + 8);
					v6 = *(_DWORD*)(v5 + 1056);
					result = (int*)(unsigned int)(v6 + 1);
					*(_DWORD*)(v5 + 1056) = (_DWORD)result;
					if (!v6)
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 48) + 16i64))(*(_QWORD*)(v5 + 48));
						result = sub_1403675C0(*(_QWORD**)(v5 + 16), v5);
					}
					v4 = *(_QWORD*)(v4 + 24);
				} while (v4);
				*(_QWORD*)(a1 + 32) = a2;
				return result;
			}
		}
	LABEL_14:
		*(_QWORD*)(a1 + 32) = a2;
		return result;
	}
	if (!*(_QWORD*)(a1 + 32))
		goto LABEL_14;
	v8 = *(_QWORD*)(a1 + 48);
	if (!v8)
		goto LABEL_14;
	do
	{
		v9 = *(_QWORD*)(v8 + 8);
		if ((*(_DWORD*)(v9 + 1056))-- == 1)
		{
			sub_140367760(*(_QWORD**)(v9 + 16), v9);
			result = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 48) + 24i64))(*(_QWORD*)(v9 + 48));
		}
		v8 = *(_QWORD*)(v8 + 24);
	} while (v8);
	*(_QWORD*)(a1 + 32) = 0i64;
	return result;
}

