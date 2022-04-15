//----- (000000014015D320) ----------------------------------------------------
void __fastcall sub_14015D320(__int64 a1)
{
	unsigned int v1; // ebx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx

	v1 = 0;
	if (*(_QWORD*)(a1 + 24))
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(a1 + 16);
			v5 = *(_QWORD*)(v4 + 8 * v3);
			if (v5)
			{
				sub_14015CE70(*(_QWORD*)(v4 + 8 * v3), v3);
				sub_14018B900(v5, 0);
			}
			v3 = ++v1;
		} while ((unsigned __int64)v1 < *(_QWORD*)(a1 + 24));
	}
	v6 = *(_QWORD*)(a1 + 16);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
}

