#include "../winhttp.h"

//----- (00000001405FE1C0) ----------------------------------------------------
_QWORD* __fastcall sub_1405FE1C0(__int64 a1, __int64 a2)
{
	_QWORD* result; // rax
	_QWORD* v5; // rbx
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rax
	int v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	void(__fastcall * v14)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v15; // [rsp+38h] [rbp-10h]

	result = *(_QWORD**)(a1 + 104);
	v5 = (_QWORD*)result[2];
	if (v5 != result)
	{
		do
		{
			v6 = v5[6];
			v7 = 0i64;
			if (v6)
			{
				v8 = v5[5];
				while (*(_DWORD*)v8 != *(_DWORD*)a2 || *(_QWORD*)(v8 + 8) != *(_QWORD*)(a2 + 8))
				{
					++v7;
					v8 += 16i64;
					if (v7 >= v6)
						goto LABEL_10;
				}
				if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5432i64))
				{
					v9 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5408i64);
					v10 = *(_QWORD*)(qword_140C65898 + 29504) + 5416i64;
					v13 = *(_QWORD*)(qword_140C65898 + 29504) + 5352i64;
					v12 = 0;
					v14 = sub_1400A8020;
					v15 = 0i64;
					sub_140195960(v10, 0, (__int64)&v12, v9);
				}
			}
		LABEL_10:
			v11 = v5[3];
			if (v11)
			{
				v5 = (_QWORD*)v5[3];
				for (result = *(_QWORD**)(v11 + 16); result; result = (_QWORD*)result[2])
					v5 = result;
			}
			else
			{
				for (result = (_QWORD*)v5[1]; v5 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v5 = result;
				if ((_QWORD*)v5[3] != result)
					v5 = result;
			}
		} while (v5 != *(_QWORD**)(a1 + 104));
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

