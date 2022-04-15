//----- (0000000140448420) ----------------------------------------------------
__int64 __fastcall sub_140448420(__int64 a1, unsigned int a2)
{
	__int64 v2; // r14
	signed int v3; // edi
	__int64 v5; // rsi
	signed int v6; // ebx
	unsigned int v7; // eax
	__int64 v8; // rbx

	v2 = qword_140C658F8;
	v3 = 0;
	LODWORD(v5) = 0;
	v6 = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		/ 0x30u
		- 1;
	if (v6 >= 0)
	{
		do
		{
			v5 = (v6 + v3) / 2;
			v7 = (**(__int64(__fastcall***)(__int64))(80 * v5 + *(_QWORD*)(v2 + 8)))(80 * v5 + *(_QWORD*)(v2 + 8));
			if (a2 >= v7)
			{
				v3 = v5 + 1;
				if (a2 <= v7)
					v3 = v6 + 1;
			}
			else
			{
				v6 = v5 - 1;
			}
		} while (v3 <= v6);
	}
	v8 = 80i64 * (int)v5;
	if ((**(unsigned int(__fastcall***)(__int64))(v8 + *(_QWORD*)(v2 + 8)))(v8 + *(_QWORD*)(v2 + 8)) == a2)
		return v8 + *(_QWORD*)(v2 + 8);
	else
		return 0i64;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

