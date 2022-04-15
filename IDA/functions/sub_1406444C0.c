#include "../winhttp.h"

//----- (00000001406444C0) ----------------------------------------------------
_QWORD* __fastcall sub_1406444C0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	__int64* v8; // rdi
	unsigned int v9; // eax
	int v10; // eax
	__int64 v11; // r8
	__int64 v12; // rdi
	int* v13; // rax
	__int64 v14; // rax

	v3 = qword_140C65C28;
	result = *(_QWORD**)(qword_140C65C28 + 112);
	v7 = (_QWORD*)result[2];
	if (v7 != result)
	{
		do
		{
			v8 = *(__int64**)(v7[5] + 40i64);
			v9 = *(_DWORD*)(*v8 + 12);
			if ((v9 & 2) == 0 && a3 == ((v9 >> 2) & 1))
			{
				v10 = sub_140644D30(*v8, *(_DWORD*)(*v8 + 8));
				if (v10 != 5 && v10 != 46)
				{
					v11 = *(unsigned int*)(*v8 + 52);
					if (!(_DWORD)v11
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								*(_QWORD*)(qword_140C65898 + 120),
								v11,
								0i64,
								0i64,
								0))
					{
						v12 = *(_QWORD*)(a2 + 8);
						v13 = sub_14018B280(24i64, 0);
						if (v13 != (int*)-16i64)
							*((_QWORD*)v13 + 2) = v7[5];
						*(_QWORD*)v13 = v12;
						*((_QWORD*)v13 + 1) = *(_QWORD*)(v12 + 8);
						**(_QWORD**)(v12 + 8) = v13;
						*(_QWORD*)(v12 + 8) = v13;
					}
				}
			}
			v14 = v7[3];
			if (v14)
			{
				v7 = (_QWORD*)v7[3];
				for (result = *(_QWORD**)(v14 + 16); result; result = (_QWORD*)result[2])
					v7 = result;
			}
			else
			{
				for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v7 = result;
				if ((_QWORD*)v7[3] != result)
					v7 = result;
			}
		} while (v7 != *(_QWORD**)(v3 + 112));
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

