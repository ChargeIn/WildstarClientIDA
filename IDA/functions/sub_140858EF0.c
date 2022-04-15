//----- (0000000140858EF0) ----------------------------------------------------
void sub_140858EF0()
{
	unsigned __int64 v0; // rbx
	_QWORD* v1; // rdi
	__int64 v2; // rax
	unsigned __int64 v3; // [rsp+20h] [rbp-28h]

	v0 = qword_140C62428;
	v1 = 0i64;
	if (qword_140C62428)
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v0 + 8) + 184i64)
				|| *(_DWORD*)(v0 + 16) > 1u
				|| (unsigned int)sub_1408318C0((_BYTE*)(v0 + 8)) == 1)
			{
				v1 = (_QWORD*)v0;
				v0 = *(_QWORD*)v0;
			}
			else
			{
				v3 = *(_QWORD*)v0;
				if (v0 == qword_140C62428)
					qword_140C62428 = *(_QWORD*)v0;
				else
					*v1 = *(_QWORD*)v0;
				v2 = qword_140C62430;
				if (v0 == qword_140C62430)
					v2 = (__int64)v1;
				qword_140C62430 = v2;
				if (v0 < qword_140C62450 || v0 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
				{
					sub_140881720(dword_140C10F28, v0);
				}
				else
				{
					*(_QWORD*)v0 = qword_140C62438;
					qword_140C62438 = v0;
				}
				--dword_140C62448;
				v0 = v3;
			}
		} while (v0);
		byte_140C62414 = 0;
	}
	else
	{
		byte_140C62414 = 0;
	}
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62414: using guessed type char byte_140C62414;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

