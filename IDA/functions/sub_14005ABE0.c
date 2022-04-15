//----- (000000014005ABE0) ----------------------------------------------------
void __noreturn sub_14005ABE0(__int64 a1, char* a2, ...)
{
	const char* v3; // rax
	va_list va; // [rsp+40h] [rbp+18h] BYREF

	va_start(va, a2);
	v3 = (const char*)sub_14005ADB0(a1, (unsigned __int64*)a2, (__int64)va);
	sub_14005AA70(a1, v3);
	sub_14005AB30(a1);
}

