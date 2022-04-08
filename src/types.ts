export interface File {
    file: string,
    path: string
}

export interface Config {
    path?: string,
    questions: string[] | object[],
    answers: string[]
}
