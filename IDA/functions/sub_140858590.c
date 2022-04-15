//----- (0000000140858590) ----------------------------------------------------
void __fastcall sub_140858590(__int64 a1)
{
	__int64 v1; // r9
	__int64* v2; // r8
	__int64* v4; // rdx
	__int64 v5; // rax
	__int64 v6; // [rsp+20h] [rbp-28h]
	__int64* v7; // [rsp+28h] [rbp-20h]

	v1 = qword_140C62428;
	v2 = 0i64;
	v4 = (__int64*)qword_140C62428;
	if (qword_140C62428)
	{
		do
		{
			if (v4[1] == a1)
			{
				v7 = v2;
				v6 = *v4;
				if (v4 == (__int64*)v1)
					qword_140C62428 = *v4;
				else
					*v2 = *v4;
				v5 = qword_140C62430;
				if (v4 == (__int64*)qword_140C62430)
					v5 = (__int64)v2;
				qword_140C62430 = v5;
				if ((unsigned __int64)v4 < qword_140C62450
					|| (unsigned __int64)v4 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
				{
					sub_140881720(dword_140C10F28, (__int64)v4);
				}
				else
				{
					*v4 = qword_140C62438;
					qword_140C62438 = (__int64)v4;
				}
				--dword_140C62448;
				v1 = qword_140C62428;
				v2 = v7;
				v4 = (__int64*)v6;
			}
			else
			{
				v2 = v4;
				v4 = (__int64*)*v4;
			}
		} while (v4);
	}
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

