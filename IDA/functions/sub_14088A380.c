//----- (000000014088A380) ----------------------------------------------------
void sub_14088A380()
{
	__int64 v0; // r8
	_QWORD* v1; // rcx
	unsigned __int64 v2; // rdx
	__int64 v3; // rax
	unsigned __int64 v4; // [rsp+20h] [rbp-28h]
	_QWORD* v5; // [rsp+28h] [rbp-20h]

	v0 = qword_140C62A30;
	v1 = 0i64;
	v2 = qword_140C62A30;
	if (qword_140C62A30)
	{
		do
		{
			if ((*(_BYTE*)(v2 + 16) & 2) != 0)
			{
				v1 = (_QWORD*)v2;
				v2 = *(_QWORD*)v2;
			}
			else
			{
				v5 = v1;
				v4 = *(_QWORD*)v2;
				if (v2 == v0)
					qword_140C62A30 = *(_QWORD*)v2;
				else
					*v1 = *(_QWORD*)v2;
				v3 = qword_140C62A38;
				if (v2 == qword_140C62A38)
					v3 = (__int64)v1;
				qword_140C62A38 = v3;
				if (v2 < qword_140C62A58 || v2 >= qword_140C62A58 + 24 * (unsigned __int64)(unsigned int)qword_140C62A48)
				{
					sub_140881720(dword_140C10F20, v2);
				}
				else
				{
					*(_QWORD*)v2 = qword_140C62A40;
					qword_140C62A40 = v2;
				}
				--dword_140C62A50;
				v0 = qword_140C62A30;
				v1 = v5;
				v2 = v4;
			}
		} while (v2);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62A30: using guessed type __int64 qword_140C62A30;
// 140C62A38: using guessed type __int64 qword_140C62A38;
// 140C62A40: using guessed type __int64 qword_140C62A40;
// 140C62A48: using guessed type __int64 qword_140C62A48;
// 140C62A50: using guessed type int dword_140C62A50;
// 140C62A58: using guessed type __int64 qword_140C62A58;

