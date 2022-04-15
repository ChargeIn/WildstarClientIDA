//----- (0000000140858910) ----------------------------------------------------
__int64 __fastcall sub_140858910(unsigned int a1)
{
	__int64 result; // rax
	__int64 v2; // rsi
	__int64 v3; // r14
	__int64 v5; // rbp
	__int64* v6; // rdi
	__int64* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // [rsp+20h] [rbp-58h]
	__int64 v12; // [rsp+40h] [rbp-38h]
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	v2 = qword_140C62418;
	v3 = 0i64;
	while (v2)
	{
		if (*(_DWORD*)(v2 + 76) == 2)
		{
			v5 = qword_140C62428;
			v6 = 0i64;
			v7 = (__int64*)qword_140C62428;
			if (qword_140C62428)
			{
				do
				{
					if (v7[1] == sub_140832B80(v2))
					{
						v11 = *v7;
						if (v7 == (__int64*)v5)
							qword_140C62428 = *v7;
						else
							*v6 = *v7;
						v8 = qword_140C62430;
						if (v7 == (__int64*)qword_140C62430)
							v8 = (__int64)v6;
						qword_140C62430 = v8;
						if ((unsigned __int64)v7 < qword_140C62450
							|| (unsigned __int64)v7 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
						{
							sub_140881720(dword_140C10F28, (__int64)v7);
						}
						else
						{
							*v7 = qword_140C62438;
							qword_140C62438 = (__int64)v7;
						}
						--dword_140C62448;
						v5 = qword_140C62428;
						v7 = (__int64*)v11;
					}
					else
					{
						v6 = v7;
						v7 = (__int64*)*v7;
					}
				} while (v7);
			}
			v12 = *(_QWORD*)(v2 + 8);
			if (v2 == qword_140C62418)
				qword_140C62418 = *(_QWORD*)(v2 + 8);
			else
				*(_QWORD*)(v3 + 8) = *(_QWORD*)(v2 + 8);
			v9 = qword_140C62420;
			if (v2 == qword_140C62420)
				v9 = v3;
			qword_140C62420 = v9;
			result = sub_140831560(v2);
			v2 = v12;
		}
		else
		{
			v10 = *(_QWORD*)(v2 + 16);
			if (v10)
				v10 = *(_QWORD*)(v10 + 24);
			if (*(char*)(v10 + 382) < 0)
				a1 = ((unsigned __int16)(0x5DC00u / dword_140C110B4) * a1) >> 10;
			result = *(unsigned int*)(v10 + 408);
			if ((int)result >= 0)
			{
				result = (unsigned int)result - a1;
				*(_DWORD*)(v10 + 408) = result;
			}
			v3 = v2;
			v2 = *(_QWORD*)(v2 + 8);
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C110B4: using guessed type int dword_140C110B4;
// 140C62418: using guessed type __int64 qword_140C62418;
// 140C62420: using guessed type __int64 qword_140C62420;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

