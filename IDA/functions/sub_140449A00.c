#include "../winhttp.h"

//----- (0000000140449A00) ----------------------------------------------------
__int64 __fastcall sub_140449A00(int a1)
{
	unsigned __int64 v2; // rsi
	__int64 i; // rdi
	__int64 v4; // rbx
	unsigned int(__fastcall * **v5)(_QWORD); // rcx
	__int64 v7; // rax

	if (!qword_140C658F8)
		return 0i64;
	v2 = 0i64;
	if (!(*(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		/ 0x30ui64))
		return 0i64;
	for (i = 0i64; ; i += 80i64)
	{
		v4 = qword_140C658F8;
		if (*(_QWORD*)(qword_140C658F8 + 8)
			&& v2 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64)
		{
			v5 = (unsigned int(__fastcall***)(_QWORD))(i + *(_QWORD*)(v4 + 8));
		}
		else
		{
			v5 = 0i64;
		}
		if ((**v5)(v5) == a1)
			break;
		if (++v2 >= *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64)
			return 0i64;
	}
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72));
	return *(_DWORD*)(v7 + 48 * v2 + 44) - *(_DWORD*)(v7 + 48 * v2 + 40);
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

