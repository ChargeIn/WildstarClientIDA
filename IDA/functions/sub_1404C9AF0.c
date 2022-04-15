#include "../winhttp.h"

//----- (00000001404C9AF0) ----------------------------------------------------
__int64 __fastcall sub_1404C9AF0(__int64 a1, _QWORD* a2, int a3, int a4, unsigned int a5)
{
	__int64 v5; // rsi
	unsigned __int64 v8; // rdi
	__int64 result; // rax
	_QWORD* v10; // rbx
	__int64* v11; // rbx
	int v12; // [rsp+58h] [rbp+20h] BYREF

	v12 = a4;
	v5 = qword_140C659F8;
	v8 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v12);
	result = v8 / *(_QWORD*)(v5 + 40);
	v10 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v8 % *(_QWORD*)(v5 + 40)));
	if (v10)
	{
		while (1)
		{
			if (v8 == *v10)
			{
				result = (*(__int64(__fastcall**)(int*, _QWORD*))(v5 + 64))(&v12, v10 + 2);
				if ((_DWORD)result)
					break;
			}
			v10 = (_QWORD*)v10[1];
			if (!v10)
				return result;
		}
		v11 = v10 + 3;
		if (v11)
		{
			result = a5;
			if (*(_DWORD*)(*v11 + 20) == a5)
				return (__int64)sub_1404C7CF0(*v11, a2, a3);
		}
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

