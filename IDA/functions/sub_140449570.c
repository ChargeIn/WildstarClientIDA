//----- (0000000140449570) ----------------------------------------------------
__int64 __fastcall sub_140449570(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned int v4; // r15d
	unsigned int v5; // eax
	__int64 v6; // r14
	signed int v7; // edi
	__int64 v8; // rsi
	unsigned int v9; // ebp
	signed int v10; // ebx
	unsigned int v11; // eax
	__int64 v12; // rbx

	v2 = a2;
	if (!a2)
		return 0i64;
	do
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 80i64))(v2);
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
		v6 = qword_140C658F8;
		v7 = 0;
		LODWORD(v8) = 0;
		v9 = v5;
		v10 = *(_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30u
			- 1;
		if (v10 >= 0)
		{
			do
			{
				v8 = (v10 + v7) / 2;
				v11 = (**(__int64(__fastcall***)(__int64))(80 * v8 + *(_QWORD*)(v6 + 8)))(80 * v8 + *(_QWORD*)(v6 + 8));
				if (v9 >= v11)
				{
					v7 = v8 + 1;
					if (v9 <= v11)
						v7 = v10 + 1;
				}
				else
				{
					v10 = v8 - 1;
				}
			} while (v7 <= v10);
		}
		v12 = 80i64 * (int)v8;
		if ((**(unsigned int(__fastcall***)(__int64))(v12 + *(_QWORD*)(v6 + 8)))(v12 + *(_QWORD*)(v6 + 8)) == v9)
			v2 = *(_QWORD*)(v6 + 8) + v12;
		else
			v2 = 0i64;
	} while (!v4 && v2);
	return v4;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

